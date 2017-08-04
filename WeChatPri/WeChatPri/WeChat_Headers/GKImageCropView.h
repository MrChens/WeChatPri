//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class GKImageCropOverlayView, NSString, UIImage, UIImageView, UIScrollView;

@interface GKImageCropView : UIView <UIScrollViewDelegate>
{
    _Bool resizableCropArea;
    UIScrollView *scrollView;
    UIImageView *imageView;
    GKImageCropOverlayView *cropOverlayView;
    double xOffset;
    double yOffset;
    double _faktoredWidth;
    double _faktoredHeight;
}

@property(nonatomic) double faktoredHeight; // @synthesize faktoredHeight=_faktoredHeight;
@property(nonatomic) double faktoredWidth; // @synthesize faktoredWidth=_faktoredWidth;
@property(nonatomic) double yOffset; // @synthesize yOffset;
@property(nonatomic) double xOffset; // @synthesize xOffset;
@property(nonatomic) _Bool resizableCropArea; // @synthesize resizableCropArea;
@property(retain, nonatomic) GKImageCropOverlayView *cropOverlayView; // @synthesize cropOverlayView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView;
- (void).cxx_destruct;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGAffineTransform)_orientationTransformedRectOfImage:(id)arg1;
- (struct CGRect)_calcVisibleRectForCropArea;
- (struct CGRect)_calcVisibleRectForResizeableCropArea;
- (id)croppedImage;
@property(nonatomic) struct CGSize cropSize;
@property(retain, nonatomic) UIImage *imageToCrop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

