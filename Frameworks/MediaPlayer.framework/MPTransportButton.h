/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVController;

@interface MPTransportButton : MPButton  {
    MPAVController *player;
}

@property(retain) MPAVController * player;

+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_accessibilityPerformValidations:(id)arg1;

- (void)setPlayer:(id)arg1;
- (id)player;
- (void).cxx_destruct;
- (id)_automationID;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (id)accessibilityValue;
- (id)accessibilityLabel;

@end