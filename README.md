# SalesforceSDK-xcframework

## How to generate xcframework
1. Download SalesforceMobileSDK [project](https://github.com/forcedotcom/SalesforceMobileSDK-iOS/releases) -
2. Execute the following commands: 

## SalesforceSDKCore

xcodebuild archive \
-workspace SalesforceMobileSDK.xcworkspace /\
-scheme SalesforceSDKCore \
-destination "generic/platform=iOS Simulator" \
-archivePath "~/archives/SalesforceSDKCore-iOS-Simulator" \
SKIP_INSTALL=NO \
BUILD_LIBRARY_FOR_DISTRIBUTION=YES

xcodebuild archive \
-workspace SalesforceMobileSDK.xcworkspace \
-scheme SalesforceSDKCore \
-destination "generic/platform=iOS" \
-archivePath "~/archives/SalesforceSDKCore-iOS" \
SKIP_INSTALL=NO \
BUILD_LIBRARY_FOR_DISTRIBUTION=YES

xcodebuild -create-xcframework \
-framework /Users/user1/archives/SalesforceSDKCore-iOS-Simulator.xcarchive/Products/Library/Frameworks/SalesforceSDKCore.framework \
-debug-symbols /Users/user1/archives/SalesforceSDKCore-iOS-Simulator.xcarchive/dSYMs/SalesforceSDKCore.framework.dSYM \
-framework /Users/user1/archives/SalesforceSDKCore-iOS.xcarchive/Products/Library/Frameworks/SalesforceSDKCore.framework \
-debug-symbols /Users/user1/archives/SalesforceSDKCore-iOS.xcarchive/dSYMs/SalesforceSDKCore.framework.dSYM \
-output SalesforceSDKCore.xcframework

## SalesforceSDKCommon

xcodebuild archive \
-workspace SalesforceMobileSDK.xcworkspace \
-scheme SalesforceSDKCommon \
-destination "generic/platform=iOS Simulator" \
-archivePath "~/archives/SalesforceSDKCommon-iOS-Simulator" \
SKIP_INSTALL=NO \
BUILD_LIBRARY_FOR_DISTRIBUTION=YES

xcodebuild archive \
-workspace SalesforceMobileSDK.xcworkspace \
-scheme SalesforceSDKCommon \
-destination "generic/platform=iOS" \
-archivePath "~/archives/SalesforceSDKCommon-iOS" \
SKIP_INSTALL=NO \
BUILD_LIBRARY_FOR_DISTRIBUTION=YES

xcodebuild -create-xcframework \
-framework /Users/user1/archives/SalesforceSDKCommon-iOS-Simulator.xcarchive/Products/Library/Frameworks/SalesforceSDKCommon.framework \
-debug-symbols /Users/user1/archives/SalesforceSDKCommon-iOS-Simulator.xcarchive/dSYMs/SalesforceSDKCommon.framework.dSYM \
-framework /Users/user1/archives/SalesforceSDKCommon-iOS.xcarchive/Products/Library/Frameworks/SalesforceSDKCommon.framework \
-debug-symbols /Users/user1/archives/SalesforceSDKCommon-iOS.xcarchive/dSYMs/SalesforceSDKCommon.framework.dSYM \
-output SalesforceSDKCommon.xcframework

## SalesforceAnalytics

xcodebuild archive \
-workspace SalesforceMobileSDK.xcworkspace \
-scheme SalesforceAnalytics \
-destination "generic/platform=iOS Simulator" \
-archivePath "~/archives/SalesforceAnalytics-iOS-Simulator" \
SKIP_INSTALL=NO \
BUILD_LIBRARY_FOR_DISTRIBUTION=YES

xcodebuild archive \
-workspace SalesforceMobileSDK.xcworkspace \
-scheme SalesforceAnalytics \
-destination "generic/platform=iOS" \
-archivePath "~/archives/SalesforceAnalytics-iOS" \
SKIP_INSTALL=NO \
BUILD_LIBRARY_FOR_DISTRIBUTION=YES

xcodebuild -create-xcframework \
-framework /Users/user1/archives/SalesforceAnalytics-iOS-Simulator.xcarchive/Products/Library/Frameworks/SalesforceAnalytics.framework \
-debug-symbols /Users/user1/archives/SalesforceAnalytics-iOS-Simulator.xcarchive/dSYMs/SalesforceAnalytics.framework.dSYM \
-framework /Users/user1/archives/SalesforceAnalytics-iOS.xcarchive/Products/Library/Frameworks/SalesforceAnalytics.framework \
-debug-symbols /Users/user1/archives/SalesforceAnalytics-iOS.xcarchive/dSYMs/SalesforceAnalytics.framework.dSYM \
-output SalesforceAnalytics.xcframework
