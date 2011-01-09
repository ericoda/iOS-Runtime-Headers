/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UITextField, SUComposeTextFieldConfiguration;



@interface SUComposeTextField : UIView <UITextFieldDelegate>
{
    SUComposeTextFieldConfiguration *_configuration;
    NSInteger _currentTextLength;
    id _delegate;
    struct CGSize { 
        float width; 
        float height; 
    } _labelSize;
    NSInteger _style;
    UITextField *_textField;
}

@property(readonly) SUComposeTextFieldConfiguration *configuration;
@property(retain) NSString *text;
@property(getter=isValid,readonly) BOOL valid;
@property(readonly) UITextField *textField;
@property id delegate;
@property(readonly) NSInteger composeReviewStyle;

+ (id)labelColorForStyle:(NSInteger)arg1;
+ (id)labelFontForStyle:(NSInteger)arg1;
+ (void)_initializeSafeCategory;

- (id)textField;
- (BOOL)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (BOOL)isValid;
- (void)setText:(id)arg1;
- (id)text;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithConfiguration:(id)arg1 style:(NSInteger)arg2;
- (void)_textChanged:(id)arg1;
- (struct CGPoint { float x1; float x2; })_textFieldOrigin;
- (NSInteger)composeReviewStyle;
- (id)configuration;

@end