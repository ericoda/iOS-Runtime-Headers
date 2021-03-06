/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSPearlEnrollController : PSViewController <BKEnrollOperationDelegate, BKEnrollPearlOperationDelegate, PSPearlEnrollViewDelegate> {
    UIButton * _accessibilityOptionsButton;
    NSTimer * _accessibilityOptionsTimer;
    UILabel * _animatingDetailLabel;
    UILabel * _animatingInstructionLabel;
    bool  _animatingState;
    bool  _bioCaptureComplete;
    double  _bioKitCompletion;
    struct __ACMHandle { } * _context;
    bool  _darkBackground;
    UILabel * _debugLabel;
    <PSPearlEnrollControllerDelegate> * _delegate;
    UILabel * _detailLabel;
    BKDevicePearl * _device;
    BKEnrollPearlOperation * _enrollOperation;
    PSPearlEnrollView * _enrollView;
    UILabel * _instructionLabel;
    UIButton * _nextStateButton;
    NSString * _passcode;
    int  _pendingSubstate;
    NSMutableArray * _poseStatus;
    int  _previousState;
    NSString * _progressString;
    int  _state;
    NSTimer * _stateDelayTimer;
    NSDate * _stateStart;
    NSTimer * _statusPollTimer;
    NSString * _statusString;
    int  _substate;
    NSTimer * _substateDelayTimer;
    bool  _substatePending;
    bool  _useNextButton;
}

@property (nonatomic) bool darkBackground;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSPearlEnrollControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int state;
@property (readonly) Class superclass;
@property (nonatomic) bool useNextButton;

+ (bool)isPearlAvailable;

- (void).cxx_destruct;
- (void)_animateLabels;
- (void)_checkForCompletion;
- (void)_cleanupEnroll;
- (id)_createDetailLabel;
- (id)_createInstructionLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_detailFrameForState:(int)arg1 label:(id)arg2 instructionLabel:(id)arg3;
- (void)_finishAnimatingLabels;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_instructionsFrameForState:(int)arg1 label:(id)arg2;
- (id)_nextStateButtonTitleForState:(int)arg1;
- (void)_prepareForLabelsAnimationToState:(int)arg1;
- (void)_setState:(int)arg1 animated:(bool)arg2;
- (void)_setSubstate:(int)arg1 animated:(bool)arg2;
- (void)_startAccessibilityOptionsTimer;
- (void)_stopAccessibilityOptionsTimer;
- (void)_updateDebugLabel;
- (void)_updateLeftBarButtonItem;
- (bool)_validateEnrolledPoses:(id)arg1;
- (bool)canBeShownFromSuspendedState;
- (void)cancelEnroll;
- (id)credentialSetForPasscode:(id)arg1;
- (bool)darkBackground;
- (void)dealloc;
- (id)delegate;
- (void)enableAccessibilityOptions;
- (void)endEnrollFlowWithError:(id)arg1;
- (void)enrollOperation:(id)arg1 failedWithReason:(long long)arg2;
- (void)enrollOperation:(id)arg1 finishedWithIdentity:(id)arg2;
- (void)enrollOperation:(id)arg1 percentCompleted:(long long)arg2;
- (void)enrollOperation:(id)arg1 progressedWithInfo:(id)arg2;
- (void)enrollView:(id)arg1 didNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3;
- (void)enrollView:(id)arg1 filledPillsAroundAngle:(double)arg2;
- (bool)enrollView:(id)arg1 shouldFillInSectionForAngle:(double)arg2;
- (id)init;
- (void)loadView;
- (void)nextStateButtonPressed:(id)arg1;
- (void)operation:(id)arg1 faceDetectStateChanged:(id)arg2;
- (void)primeWithPasscode:(id)arg1;
- (void)returnToEnroll;
- (void)setDarkBackground:(bool)arg1;
- (void)setDarkBackground:(bool)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setState:(int)arg1 animated:(bool)arg2;
- (void)setState:(int)arg1 animated:(bool)arg2 afterDelay:(double)arg3;
- (void)setStatus:(id)arg1;
- (void)setSubstate:(int)arg1 animated:(bool)arg2 afterDelay:(double)arg3;
- (void)setUseNextButton:(bool)arg1;
- (void)startEnroll;
- (int)state;
- (void)toggleDebug;
- (void)toggleDebugAndSave;
- (bool)useNextButton;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willResignActive:(id)arg1;

@end
