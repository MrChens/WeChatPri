//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, WXGMigrationMsgItemDB;
@protocol OS_dispatch_queue, WXGMigrationRecoverHelperDelegate;

@interface WXGMigrationRecoverHelper : NSObject
{
    NSObject<OS_dispatch_queue> *m_FileSerialQueue;
    NSData *m_encryptKey;
    WXGMigrationMsgItemDB *m_msgItemDB;
    id <WXGMigrationRecoverHelperDelegate> _delegate;
}

@property(nonatomic) __weak id <WXGMigrationRecoverHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)p_writeBufferFileToPersistentPath;
- (_Bool)p_writeMediaDataPush:(id)arg1 toPath:(id)arg2;
- (_Bool)p_writeMsgListDataPush:(id)arg1 toPath:(id)arg2;
- (void)asynProcessMigrationRequestSessionDataInfoArray:(id)arg1 shouldCheckPersisten:(_Bool)arg2;
- (void)asynProcessMigrationDataTag:(id)arg1;
- (void)oldAsyncProcessPieceOfData:(id)arg1;
- (void)asynProcessPieceOfData:(id)arg1;
- (void)dealloc;
- (id)initWithEncryptKey:(id)arg1;

@end

