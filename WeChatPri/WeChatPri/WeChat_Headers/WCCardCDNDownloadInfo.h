//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CdnComMediaInfo, NSString;

@interface WCCardCDNDownloadInfo : NSObject
{
    unsigned int _fileLength;
    NSString *_fileId;
    NSString *_aesKey;
    NSString *_savePath;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    CdnComMediaInfo *_cdnMediaInfo;
}

@property(retain, nonatomic) CdnComMediaInfo *cdnMediaInfo; // @synthesize cdnMediaInfo=_cdnMediaInfo;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(nonatomic) unsigned int fileLength; // @synthesize fileLength=_fileLength;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
- (void).cxx_destruct;

@end

