// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "PIAAccount",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "PIAAccount",
            targets: ["PIAAccount"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "PIAAccount",
            path: "./PIAAccount.xcframework"
        ),
    ]
)
