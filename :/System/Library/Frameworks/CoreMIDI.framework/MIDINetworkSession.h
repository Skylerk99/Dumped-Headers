/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MIDINetworkSession : NSObject {

	void* _imp;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) unsigned long long networkPort; 
@property (nonatomic,readonly) NSString * networkName; 
@property (nonatomic,readonly) NSString * localName; 
@property (assign,nonatomic) unsigned long long connectionPolicy; 
+(id)defaultSession;
-(id)contacts;
-(BOOL)addContact:(id)arg1 ;
-(void)setStateToEntity;
-(void)updateFromEntity;
-(void)refreshBonjourName;
-(BOOL)addOrRemoveConnection:(id)arg1 add:(BOOL)arg2 ;
-(unsigned long long)networkPort;
-(BOOL)removeContact:(id)arg1 ;
-(void)sessionChanged;
-(void)contactsChanged;
-(unsigned)sourceEndpoint;
-(unsigned)destinationEndpoint;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)removeConnection:(id)arg1 ;
-(id)connections;
-(BOOL)addConnection:(id)arg1 ;
-(NSString *)localName;
-(unsigned long long)connectionPolicy;
-(void)setConnectionPolicy:(unsigned long long)arg1 ;
-(NSString *)networkName;
@end

