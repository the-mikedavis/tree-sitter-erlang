// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterErlang",
    products: [
        .library(name: "TreeSitterErlang", targets: ["TreeSitterErlang"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterErlang",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterErlangTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterErlang",
            ],
            path: "bindings/swift/TreeSitterErlangTests"
        )
    ],
    cLanguageStandard: .c11
)
