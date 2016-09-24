/* Generated by RuntimeBrowser.
 */

@protocol HUQuickControlViewControllerDelegate <NSObject>

@required

- (UIViewController<HUQuickControlDetailsPresentationDelegateHost> *)detailsViewControllerForQuickControlViewController:(HUQuickControlViewController *)arg1 item:(HFItem *)arg2;
- (BOOL)hasDetailsActionForQuickControlViewController:(HUQuickControlViewController *)arg1 item:(HFItem *)arg2;
- (HUApplier *)quickControlViewController:(HUQuickControlViewController *)arg1 applierForSourceViewTransitionWithAnimationSettings:(HUAnimationSettings *)arg2 presenting:(BOOL)arg3;
- (float)quickControlViewController:(HUQuickControlViewController *)arg1 sourceViewInitialScaleForPresentation:(BOOL)arg2;
- (void)quickControlViewControllerWillDismissDetailsViewController:(HUQuickControlViewController *)arg1 shouldDismissQuickControl:(BOOL)arg2;

@end