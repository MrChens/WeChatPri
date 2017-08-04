//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CEmoticonWrap, UIImageView;

@interface MMEmoticonView : UIView
{
    double m_imageScale;
    UIImageView *m_animatedImageView;
    CEmoticonWrap *m_emoticonWrap;
    double _maxSize;
    double _minSize;
    UIImageView *_m_imageView;
    struct CGSize _noImageSize;
}

+ (unsigned int)getIdKeyNotImageFile;
+ (unsigned int)getIdKeyDisplayFailed;
+ (unsigned int)getIdKeyIdEmoticon;
@property(retain, nonatomic) UIImageView *m_imageView; // @synthesize m_imageView=_m_imageView;
@property(nonatomic) struct CGSize noImageSize; // @synthesize noImageSize=_noImageSize;
@property(nonatomic) double minSize; // @synthesize minSize=_minSize;
@property(nonatomic) double maxSize; // @synthesize maxSize=_maxSize;
@property(readonly, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=m_emoticonWrap;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)setEmoticonWrap:(id)arg1 PlayGif:(_Bool)arg2;
- (void)setImageHidden:(_Bool)arg1;
- (_Bool)formGifView:(_Bool)arg1;
- (_Bool)formImageView:(id)arg1 newSize:(struct CGSize)arg2;
- (_Bool)formImageView:(id)arg1;
- (struct CGSize)contentImageSizeForOriginSize:(struct CGSize)arg1 emoticonWrap:(id)arg2;
- (struct CGSize)contentImageSizeForOriginSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGSize)calSizeForSize:(struct CGSize)arg1;
- (void)adjustSettingForMessage;
- (void)adjustSettingForPreview;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

