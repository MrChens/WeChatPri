//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMIconActionSheetContentView, NSObject, UIImageView, UILabel;

@interface MMIconActionSheetCell : UIView
{
    UILabel *titleLabel;
    MMIconActionSheetContentView *contentView;
    UIImageView *imageView;
    long long index;
    NSObject *userInfo;
}

@property(retain, nonatomic) NSObject *userInfo; // @synthesize userInfo;
@property(nonatomic) long long index; // @synthesize index;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView;
@property(retain, nonatomic) MMIconActionSheetContentView *contentView; // @synthesize contentView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
- (void).cxx_destruct;
- (void)setEnable:(_Bool)arg1;
- (void)setTitleText:(id)arg1;
- (double)lineHeight;
- (id)init;
- (id)initWithIndex:(long long)arg1;

@end

