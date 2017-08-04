//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSData, NSDictionary, NSString;

@interface CBaseContact : NSObject <PBCoding, NSCoding>
{
    NSString *m_nsUsrName;
    NSString *m_nsEncodeUserName;
    NSString *m_nsAliasName;
    unsigned int m_uiConType;
    NSString *m_nsNickName;
    NSString *m_nsFullPY;
    NSString *m_nsShortPY;
    NSString *m_nsRemark;
    NSString *m_nsRemarkPYShort;
    NSString *m_nsRemarkPYFull;
    NSString *m_nsDisplayNamePY;
    unsigned int m_uiSex;
    unsigned int m_uiType;
    unsigned int m_uiChatState;
    NSData *m_dtUsrImg;
    NSString *m_nsImgStatus;
    NSString *m_nsHDImgStatus;
    NSString *m_nsHeadImgUrl;
    NSString *m_nsHeadHDImgUrl;
    NSString *m_nsHeadHDMd5;
    NSString *m_nsDraft;
    unsigned int m_uiDraftTime;
    NSString *m_nsAtUserList;
    unsigned int m_uiQQUin;
    NSString *m_nsQQNickName;
    NSString *m_nsQQRemark;
    NSString *m_nsMobileIdentify;
    NSString *m_nsGoogleContactName;
    NSString *m_nsGoogleContactNickName;
    unsigned int m_uiFriendScene;
    unsigned int m_uiImgKey;
    unsigned int m_uiExtKey;
    unsigned int m_uiImgKeyAtLastGet;
    unsigned int m_uiExtKeyAtLastGet;
    _Bool m_hasDetectPlugin;
    _Bool m_isPlugin;
    _Bool m_hasDetectSelf;
    _Bool m_isSelf;
    NSString *m_nsAntispamTicket;
    NSDictionary *_externalInfoJSONCache;
}

+ (void)initialize;
@property(retain, nonatomic) NSDictionary *externalInfoJSONCache; // @synthesize externalInfoJSONCache=_externalInfoJSONCache;
@property(retain, nonatomic) NSString *m_nsDisplayNamePY; // @synthesize m_nsDisplayNamePY;
@property(retain, nonatomic) NSString *m_nsAntispamTicket; // @synthesize m_nsAntispamTicket;
@property(retain, nonatomic) NSString *m_nsShortPY; // @synthesize m_nsShortPY;
@property(retain, nonatomic) NSString *m_nsAtUserList; // @synthesize m_nsAtUserList;
@property(nonatomic) unsigned int m_uiDraftTime; // @synthesize m_uiDraftTime;
@property(nonatomic) unsigned int m_uiFriendScene; // @synthesize m_uiFriendScene;
@property(retain, nonatomic) NSString *m_nsGoogleContactNickName; // @synthesize m_nsGoogleContactNickName;
@property(retain, nonatomic) NSString *m_nsGoogleContactName; // @synthesize m_nsGoogleContactName;
@property(retain, nonatomic) NSString *m_nsMobileIdentify; // @synthesize m_nsMobileIdentify;
@property(retain, nonatomic) NSString *m_nsQQRemark; // @synthesize m_nsQQRemark;
@property(retain, nonatomic) NSString *m_nsQQNickName; // @synthesize m_nsQQNickName;
@property(nonatomic) unsigned int m_uiQQUin; // @synthesize m_uiQQUin;
@property(nonatomic) unsigned int m_uiExtKeyAtLastGet; // @synthesize m_uiExtKeyAtLastGet;
@property(nonatomic) unsigned int m_uiImgKeyAtLastGet; // @synthesize m_uiImgKeyAtLastGet;
@property(nonatomic) unsigned int m_uiExtKey; // @synthesize m_uiExtKey;
@property(nonatomic) unsigned int m_uiImgKey; // @synthesize m_uiImgKey;
@property(retain, nonatomic) NSString *m_nsDraft; // @synthesize m_nsDraft;
@property(retain, nonatomic) NSString *m_nsHeadHDMd5; // @synthesize m_nsHeadHDMd5;
@property(retain, nonatomic) NSString *m_nsHeadHDImgUrl; // @synthesize m_nsHeadHDImgUrl;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;
@property(retain, nonatomic) NSString *m_nsHDImgStatus; // @synthesize m_nsHDImgStatus;
@property(retain, nonatomic) NSString *m_nsImgStatus; // @synthesize m_nsImgStatus;
@property(retain, nonatomic) NSData *m_dtUsrImg; // @synthesize m_dtUsrImg;
@property(nonatomic) unsigned int m_uiChatState; // @synthesize m_uiChatState;
@property(nonatomic) unsigned int m_uiType; // @synthesize m_uiType;
@property(nonatomic) unsigned int m_uiSex; // @synthesize m_uiSex;
@property(retain, nonatomic) NSString *m_nsRemarkPYFull; // @synthesize m_nsRemarkPYFull;
@property(retain, nonatomic) NSString *m_nsRemarkPYShort; // @synthesize m_nsRemarkPYShort;
@property(retain, nonatomic) NSString *m_nsRemark; // @synthesize m_nsRemark;
@property(retain, nonatomic) NSString *m_nsFullPY; // @synthesize m_nsFullPY;
@property(nonatomic) unsigned int m_uiConType; // @synthesize m_uiConType;
@property(retain, nonatomic) NSString *m_nsAliasName; // @synthesize m_nsAliasName;
@property(retain, nonatomic) NSString *m_nsEncodeUserName; // @synthesize m_nsEncodeUserName;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool m_isPlugin; // @synthesize m_isPlugin;
- (id)localizedStringForMale:(id)arg1 female:(id)arg2 andUnkownSex:(id)arg3;
- (int)getImageStatusCode;
- (_Bool)isHasGMail;
- (id)getQQDisplayName;
- (_Bool)isHasQQDisplayName;
- (_Bool)isHasQQ;
- (_Bool)isWeixinTeamContact;
- (_Bool)isSelf;
- (_Bool)hasContactDisplayUsrNameByCache;
- (_Bool)hasContactDisplayUsrName;
- (id)getContactDisplayUsrName;
- (id)getContactTalkRoomName;
- (id)getContactDisplayName;
- (void)setDisplayNamePY;
- (id)getRemark;
- (void)saveUserImage;
- (id)getContactHeadImage;
- (_Bool)isNeedGetHDImg;
- (_Bool)isHasHDImg;
- (_Bool)isNeedGetUsrImgWithoutCheckLocalFile;
- (_Bool)isNeedGetUsrImg;
- (_Bool)isEnterpriseContact;
- (_Bool)isWeSportContact;
- (_Bool)isChatStatusNotifyOpen;
- (_Bool)isMacHelper;
- (_Bool)isQQ;
- (_Bool)isQQMBlog;
- (_Bool)isTemplateMsgHolder;
- (_Bool)isFileHelper;
- (_Bool)isBrandSessionHolder;
- (_Bool)isGroupCard;
- (_Bool)isChatroom;
- (_Bool)isLbsroom;
- (_Bool)isWeixin;
- (_Bool)isMMContact;
- (_Bool)isFavour;
- (void)setWeSportBlack:(_Bool)arg1;
- (_Bool)isWeSportBlack;
- (void)setSnsBlack:(_Bool)arg1;
- (_Bool)isSnsBlack;
- (void)setBlack:(_Bool)arg1;
- (_Bool)isBlack;
- (_Bool)isEqualToName:(id)arg1;
- (_Bool)isEqualToContact:(id)arg1;
- (id)getEncodeUserName;
- (_Bool)isValid;
- (void)setChatRoomTopic:(id)arg1;
- (id)chatRoomTopic;
- (long long)compare:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)copyFrom:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)setRemarkWithoutEmojiChange:(id)arg1;
- (void)setNickNameWithoutEmojiChange:(id)arg1;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
- (unsigned int)realFriendScene;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

