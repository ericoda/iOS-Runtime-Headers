/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBStatusBarSettings : NSObject <BSSettingDescriptionProvider, NSCoding, NSCopying, NSMutableCopying> {
    BSMutableSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithBSSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isHidden;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)style;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
