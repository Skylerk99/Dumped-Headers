/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol ISOperationDelegate;
@class NSError, NSLock, NSRunLoop, SSOperationProgress, NSString, NSArray, NSMutableArray;

@interface ISOperation : NSOperation {

	id<ISOperationDelegate> _delegate;
	NSError* _error;
	NSLock* _lock;
	NSRunLoop* _operationRunLoop;
	ISOperation* _parentOperation;
	SSOperationProgress* _progress;
	BOOL _shouldMessageMainThread;
	NSString* _powerAssertionIdentifier;
	NSArray* _serializationLockIdentifiers;
	NSMutableArray* _subOperations;
	BOOL _shouldRunWithBackgroundPriority;
	BOOL _stopped;
	BOOL _success;
	id _threadSafeDelegate;

}

@property (assign) id<ISOperationDelegate> delegate; 
@property (assign) BOOL shouldMessageMainThread; 
@property (retain) NSString * powerAssertionIdentifier;                     //@synthesize powerAssertionIdentifier=_powerAssertionIdentifier - In the implementation block
@property (readonly) NSString * uniqueKey; 
@property (assign) BOOL shouldRunWithBackgroundPriority;                    //@synthesize shouldRunWithBackgroundPriority=_shouldRunWithBackgroundPriority - In the implementation block
@property (retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (assign) BOOL success;                                            //@synthesize success=_success - In the implementation block
@property (readonly) long long progressWeight; 
@property (retain) ISOperation * parentOperation;                           //@synthesize parentOperation=_parentOperation - In the implementation block
@property (nonatomic,readonly) SSOperationProgress * progress; 
@property (retain) NSRunLoop * operationRunLoop;                            //@synthesize operationRunLoop=_operationRunLoop - In the implementation block
@property (readonly) id threadSafeDelegate; 
@property (copy) NSArray * serializationLockIdentifiers; 
-(void)setScriptOptions:(id)arg1 ;
-(void)sendCompletionCallback:(id)arg1 ;
-(BOOL)copyAccountID:(id*)arg1 byAuthenticatingWithContext:(id)arg2 returningError:(id*)arg3 ;
-(id)authenticatedAccountDSID;
-(BOOL)loadSoftwareMapReturningError:(id*)arg1 ;
-(BOOL)loadURLBagWithContext:(id)arg1 returningError:(id*)arg2 ;
-(id)loadedURLBagWithContext:(id)arg1 returningError:(id*)arg2 ;
-(NSError *)error;
-(void)cancel;
-(void)setDelegate:(id<ISOperationDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ISOperationDelegate>)delegate;
-(void)lock;
-(void)unlock;
-(void)run;
-(SSOperationProgress *)progress;
-(void)main;
-(ISOperation *)parentOperation;
-(void)setParentOperation:(ISOperation *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(BOOL)success;
-(BOOL)runSubOperation:(id)arg1 returningError:(id*)arg2 ;
-(void)setSuccess:(BOOL)arg1 ;
-(void)_keepAliveTimer:(id)arg1 ;
-(void)_addSubOperation:(id)arg1 ;
-(void)dispatchCompletionBlock;
-(void)_removeSubOperation:(id)arg1 ;
-(BOOL)stopRunLoop;
-(NSRunLoop *)operationRunLoop;
-(BOOL)shouldFailAfterUniquePredecessorError:(id)arg1 ;
-(NSString *)powerAssertionIdentifier;
-(BOOL)shouldRunWithBackgroundPriority;
-(void)_main:(BOOL)arg1 ;
-(void)_failAfterException;
-(id)copyActivePowerAssertionIdentifiers;
-(NSArray *)serializationLockIdentifiers;
-(void)_sendErrorToDelegate:(id)arg1 ;
-(void)setOperationRunLoop:(NSRunLoop *)arg1 ;
-(void)sendProgressToDelegate;
-(void)_sendWillStartToDelegate;
-(void)run:(BOOL)arg1 ;
-(void)_sendSuccessToDelegate;
-(long long)progressWeight;
-(int)runRunLoopUntilStopped;
-(BOOL)runSubOperation:(id)arg1 onQueue:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldMessageMainThread;
-(id)copySerializationLocks;
-(void)releasePowerAssertionsDuringBlock:(/*^block*/id)arg1 ;
-(void)sendDidTakeSerializationLocks;
-(void)setSerializationLockIdentifiers:(NSArray *)arg1 ;
-(void)setPowerAssertionIdentifier:(NSString *)arg1 ;
-(void)setShouldRunWithBackgroundPriority:(BOOL)arg1 ;
-(void)setShouldMessageMainThread:(BOOL)arg1 ;
-(id)threadSafeDelegate;
-(NSString *)uniqueKey;
@end

