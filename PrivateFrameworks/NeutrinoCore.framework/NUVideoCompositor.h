/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUVideoCompositor : NSObject <AVVideoCompositing> {
    NSObject<OS_dispatch_queue> * _renderingQueue;
    bool  _shouldCancelAllRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsWideColorSourceFrames;

- (void).cxx_destruct;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)fulfillVideoCompositionRequest:(id)arg1;
- (id)init;
- (void)renderContextChanged:(id)arg1;
- (id)requiredPixelBufferAttributesForRenderContext;
- (id)sourcePixelBufferAttributes;
- (void)startVideoCompositionRequest:(id)arg1;
- (bool)supportsWideColorSourceFrames;
- (id)videoFramesFromRequest:(id)arg1;

@end
