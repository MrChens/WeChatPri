//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIImageView.h"

#import "MMImageLoaderObserver-Protocol.h"

@class MMAnimatedImageDecoder, MMGifView, NSString, NSURL, UIImage, UIView;
@protocol MMWebImageViewDelegate;

@interface MMWebImageView : MMUIImageView <MMImageLoaderObserver>
{
    UIImage *_defaultImage;
    NSURL *_url;
    _Bool _loadCachedImageFileOnMainThread;
    id <MMWebImageViewDelegate> m_loadingDelegate;
    MMGifView *m_gifView;
    MMAnimatedImageDecoder *m_animatedImageDecoder;
    UIView *m_view;
    _Bool _isImageStatic;
    double _imageScale;
}

+ (_Bool)CanLoadImage:(id)arg1;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) _Bool isImageStatic; // @synthesize isImageStatic=_isImageStatic;
@property(nonatomic) _Bool loadCachedImageFileOnMainThread; // @synthesize loadCachedImageFileOnMainThread=_loadCachedImageFileOnMainThread;
@property(nonatomic) __weak id <MMWebImageViewDelegate> m_loadingDelegate; // @synthesize m_loadingDelegate;
- (void).cxx_destruct;
- (_Bool)setImageFromCacheImage:(id)arg1;
- (void)removeGifView;
- (_Bool)setImageFromImageLoaderForUrl:(id)arg1;
- (_Bool)setImageFromData:(id)arg1;
- (void)dealloc;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
@property(readonly, nonatomic) _Bool isSingleFrame;
- (id)getUrl;
- (id)getDefaultImage;
- (id)getImage;
- (void)setDefaultImage:(id)arg1;
- (void)setImageURL:(id)arg1 withAuthorizationCode:(id)arg2 forceUpdate:(_Bool)arg3;
- (void)setImageURL:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)setImageURL:(id)arg1;
- (void)setEmptyableImageUrl:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)setEmptyableImageUrl:(id)arg1;
- (void)setEmptyImageURL;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setLoadingDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

