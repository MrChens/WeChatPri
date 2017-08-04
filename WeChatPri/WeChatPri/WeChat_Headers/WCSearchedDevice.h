//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CContact, NSDictionary, WCBLEDevice, WCDevice, WCLanDeviceInfo;

@interface WCSearchedDevice : NSObject
{
    int _connProto;
    WCDevice *_originalDevice;
    WCBLEDevice *_bleDevice;
    WCLanDeviceInfo *_lanDevice;
    NSDictionary *_userData;
    CContact *_deviceContact;
}

@property(retain, nonatomic) CContact *deviceContact; // @synthesize deviceContact=_deviceContact;
@property(retain, nonatomic) NSDictionary *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) WCLanDeviceInfo *lanDevice; // @synthesize lanDevice=_lanDevice;
@property(retain, nonatomic) WCBLEDevice *bleDevice; // @synthesize bleDevice=_bleDevice;
@property(retain, nonatomic) WCDevice *originalDevice; // @synthesize originalDevice=_originalDevice;
@property(nonatomic) int connProto; // @synthesize connProto=_connProto;
- (void).cxx_destruct;
- (id)initWithLanDevice:(id)arg1;
- (id)initWithBleDevice:(id)arg1;
- (id)init;

@end

