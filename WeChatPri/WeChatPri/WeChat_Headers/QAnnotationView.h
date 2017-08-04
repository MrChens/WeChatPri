//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QRecyclableView-Protocol.h"
#import "QSMCalloutViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, QSMCalloutView, UIImage, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol QAnnotation;

@interface QAnnotationView : UIView <UIGestureRecognizerDelegate, QRecyclableView, QSMCalloutViewDelegate>
{
    _Bool highlighted;
    _Bool _selected;
    _Bool selectedBeforeStarting;
    _Bool canShowCallout;
    _Bool draggable;
    int _dragState;
    NSString *_reuseIdentifier;
    id <QAnnotation> _annotation;
    UIView *_leftCalloutAccessoryView;
    UIView *_rightCalloutAccessoryView;
    QSMCalloutView *tip;
    UITapGestureRecognizer *tapGestureGecognizer;
    UILongPressGestureRecognizer *longPressGestureGecognizer;
    UITapGestureRecognizer *_tapTwiceGestureGecognizer;
    struct CGPoint _centerOffset;
    struct CGPoint calloutOffset;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapTwiceGestureGecognizer; // @synthesize tapTwiceGestureGecognizer=_tapTwiceGestureGecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureGecognizer; // @synthesize longPressGestureGecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureGecognizer; // @synthesize tapGestureGecognizer;
@property(nonatomic) int dragState; // @synthesize dragState=_dragState;
@property(nonatomic, getter=isDraggable) _Bool draggable; // @synthesize draggable;
@property(retain, nonatomic) QSMCalloutView *tip; // @synthesize tip;
@property(retain, nonatomic) UIView *rightCalloutAccessoryView; // @synthesize rightCalloutAccessoryView=_rightCalloutAccessoryView;
@property(retain, nonatomic) UIView *leftCalloutAccessoryView; // @synthesize leftCalloutAccessoryView=_leftCalloutAccessoryView;
@property(nonatomic) struct CGPoint calloutOffset; // @synthesize calloutOffset;
@property(nonatomic) _Bool canShowCallout; // @synthesize canShowCallout;
@property(nonatomic) _Bool selectedBeforeStarting; // @synthesize selectedBeforeStarting;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted;
@property(nonatomic) struct CGPoint centerOffset; // @synthesize centerOffset=_centerOffset;
@property(retain, nonatomic) id <QAnnotation> annotation; // @synthesize annotation=_annotation;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)initGestureRecognizers;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeFromSuperview;
- (void)longPressGesture:(id)arg1;
- (void)tapTwiceGesture:(id)arg1;
- (void)tapGesture:(id)arg1;
- (void)hideTipAnimated:(_Bool)arg1;
- (void)showTipAnimated:(_Bool)arg1;
- (void)setDragState:(int)arg1 animated:(_Bool)arg2;
- (_Bool)supportDragOperation;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)prepareForReuse;
@property(retain, nonatomic) UIImage *image;
- (void)calloutAccessoryAction:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (double)calloutView:(id)arg1 delayForRepositionWithSize:(struct CGSize)arg2;
- (void)removeObserverForAnnotation:(id)arg1;
- (void)addObserverForAnnotation:(id)arg1;
- (void)removeTargetForControl:(id)arg1;
- (void)addTargetForControl:(id)arg1;
- (void)animationWithDuration:(double)arg1 delay:(double)arg2 coordinates:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)notifyCalloutAccessoryControlTapped:(id)arg1;
- (void)notifyDidChangeDragState:(int)arg1 fromOldState:(int)arg2;
- (void)notifyDidDeselect;
- (void)notifyDidSelect;
- (struct CLLocationCoordinate2D)coordinateForPoint:(struct CGPoint)arg1;
- (void)updateCenter;
- (id)container;
- (id)mapView;
- (id)annotationFloor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

