//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMailContact, UIView;

@protocol MailReceiverEditViewDelegate <NSObject>

@optional
- (void)onMailContactChanged:(UIView *)arg1;
- (void)onTextFieldNextItem:(UIView *)arg1;
- (void)onTextFieldBeginEdit:(UIView *)arg1;
- (void)onTextFieldChanged:(UIView *)arg1;
- (void)onTextFieldFinishEdit:(UIView *)arg1;
- (void)onMailReceiverEditViewHeightChanged:(UIView *)arg1;
- (void)onAddMailContact:(UIView *)arg1;
- (void)onMailContactDoubleClicked:(CMailContact *)arg1;
@end

