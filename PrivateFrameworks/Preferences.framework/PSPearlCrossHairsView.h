/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSPearlCrossHairsView : UIView {
    bool  _active;
    bool  _clampAlphaWithDeviation;
    CADisplayLink * _displayLink;
    int  _numLines;
    NSMutableArray * _pitchCrossHairs;
    bool  _pitchHidden;
    double  _pitchVelocity;
    double  _renderedPitch;
    double  _renderedYaw;
    double  _targetPitch;
    double  _targetYaw;
    NSMutableArray * _yawCrossHairs;
    bool  _yawHidden;
    double  _yawVelocity;
}

@property (nonatomic) bool active;
@property (nonatomic) int numLines;
@property (nonatomic) bool pitchHidden;
@property (nonatomic) double renderedPitch;
@property (nonatomic) double renderedYaw;
@property (nonatomic) double targetPitch;
@property (nonatomic) double targetYaw;
@property (nonatomic) bool yawHidden;

- (void).cxx_destruct;
- (void)_setPitch:(double)arg1 yaw:(double)arg2 animated:(bool)arg3;
- (bool)active;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)nudgeInDirection:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (int)numLines;
- (void)ourDisplayLinkCallback:(id)arg1;
- (bool)pitchHidden;
- (double)renderedPitch;
- (double)renderedYaw;
- (void)setActive:(bool)arg1;
- (void)setNumLines:(int)arg1;
- (void)setPitch:(double)arg1 yaw:(double)arg2 animated:(bool)arg3;
- (void)setPitchHidden:(bool)arg1;
- (void)setRenderedPitch:(double)arg1;
- (void)setRenderedYaw:(double)arg1;
- (void)setTargetPitch:(double)arg1;
- (void)setTargetYaw:(double)arg1;
- (void)setYawHidden:(bool)arg1;
- (id /* block */)springAnimatorWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4;
- (double)targetPitch;
- (double)targetYaw;
- (void)updateCrossHair;
- (void)updateDisplay;
- (bool)yawHidden;

@end