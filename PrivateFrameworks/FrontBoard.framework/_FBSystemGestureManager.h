/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface _FBSystemGestureManager : NSObject <FBExclusiveTouchGestureRecognizerDelegate, UIGestureRecognizerDelegate> {
    bool  _achievedMaximumMovement;
    bool  _didSeeExclusiveTouchBegan;
    FBSDisplay * _display;
    UIGestureRecognizer * _exclusiveTouchGesture;
    NSMutableSet * _externalGestures;
    NSMutableSet * _internalGestures;
    NSMutableSet * _recognizingGestures;
    BKSTouchStream * _touchStream;
}

@property (nonatomic) bool achievedMaximumMovement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didSeeExclusiveTouchBegan;
@property (nonatomic, readonly, retain) FBSDisplay *display;
@property (nonatomic, retain) UIGestureRecognizer *exclusiveTouchGesture;
@property (nonatomic, readonly, copy) NSSet *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) BKSTouchStream *touchStream;

- (void)_addInternalGesturesToView:(id)arg1;
- (void)_exclusiveTouchGestureChanged:(id)arg1;
- (void)_exclusiveTouchGestureDidTerminate:(id)arg1;
- (void)_externalGestureRecognizerChanged:(id)arg1;
- (void)_handleTooMuchMovementWithLastTouchTimestamp:(double)arg1;
- (void)_removeInternalGestures;
- (bool)achievedMaximumMovement;
- (void)addGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)didSeeExclusiveTouchBegan;
- (id)display;
- (id)exclusiveTouchGesture;
- (void)exclusiveTouchGestureRecognizer:(id)arg1 achievedMaximumAbsoluteAccumulatedMovement:(bool)arg2 timestamp:(double)arg3;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)gestureRecognizers;
- (id)initWithDisplay:(id)arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (void)setAchievedMaximumMovement:(bool)arg1;
- (void)setDidSeeExclusiveTouchBegan:(bool)arg1;
- (void)setExclusiveTouchGesture:(id)arg1;
- (void)setTouchStream:(id)arg1;
- (id)touchStream;
- (id)windowForSystemGestures;

@end