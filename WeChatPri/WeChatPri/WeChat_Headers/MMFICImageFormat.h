//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface MMFICImageFormat : NSObject <NSCopying>
{
    NSString *_name;
    NSString *_family;
    struct CGSize _imageSize;
    struct CGSize _pixelSize;
    unsigned int _maxImgCount;
    unsigned int _cpuzSize;
    unsigned int _pageSize;
    unsigned int _version;
}

+ (id)formatWithName:(id)arg1 family:(id)arg2 imageSize:(struct CGSize)arg3 maxImgCount:(unsigned int)arg4 version:(unsigned int)arg5;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) unsigned int cpuzSize; // @synthesize cpuzSize=_cpuzSize;
@property(nonatomic) unsigned int maxImgCount; // @synthesize maxImgCount=_maxImgCount;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(copy, nonatomic) NSString *family; // @synthesize family=_family;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned int bitsPerComponent;
@property(readonly, nonatomic) unsigned int bytesPerPixel;
@property(readonly, nonatomic) unsigned int bitmapInfo;
- (id)init;

@end

