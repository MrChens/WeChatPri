//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "WCCanvasImageLoaderObserver-Protocol.h"

@class MMCPLabel, NSString, WCCanvasAbilitySlider;

@interface WCCanvasAbilitySliderComponent : WCCanvasComponent <WCCanvasImageLoaderObserver>
{
    WCCanvasAbilitySlider *_abilitySlider;
    MMCPLabel *_abilityLabel;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
@property(retain, nonatomic) MMCPLabel *abilityLabel; // @synthesize abilityLabel=_abilityLabel;
@property(retain, nonatomic) WCCanvasAbilitySlider *abilitySlider; // @synthesize abilitySlider=_abilitySlider;
- (void).cxx_destruct;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

