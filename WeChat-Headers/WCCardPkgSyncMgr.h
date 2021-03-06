//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSData, WCCardPkgDB;

@interface WCCardPkgSyncMgr : MMObject <PBMessageObserverDelegate>
{
    NSData *_syncKeyBuffer;
    WCCardPkgDB *_wcCardPkgDB;
    id <WCCardSyncMgrDelegate> _delegate;
}

@property(nonatomic) __weak id <WCCardSyncMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleWCCardSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)syncByNotify:(unsigned int)arg1 Scene:(unsigned int)arg2;
- (void)clearSyncKey;
- (void)initDB:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)reloadSyncKeyBuffer;
- (void)loadSyncKeyBuffer;
- (_Bool)saveSyncKeyBuffer:(id)arg1;
- (id)getSyncKeyBufferFilePath;

@end

