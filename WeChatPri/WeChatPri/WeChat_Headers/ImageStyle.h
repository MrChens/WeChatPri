//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseStyle.h"

@class NSString, UIImage;

@interface ImageStyle : BaseStyle
{
    UIImage *_oImage;
    NSString *_imageName;
}

@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) UIImage *oImage; // @synthesize oImage=_oImage;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;

@end

