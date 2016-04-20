/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPObjectDelegate, TSPLazyReferenceDelegate, TSPUnarchiverDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSPUnknownContent, NSUUID;

@interface TSPUnarchiver : NSObject {

	unsigned _messageType;
	auto_ptr<google::protobuf::Message>* _message;
	long long _objectIdentifier;
	auto_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > >* _strongReferences;
	unsigned long long _messageVersion;
	TSPUnknownContent* _unknownContent;
	id<TSPObjectDelegate> _objectDelegate;
	id<TSPLazyReferenceDelegate> _lazyReferenceDelegate;
	id<TSPUnarchiverDelegate> _delegate;
	vector<TSP::UnarchiverReference, std::__1::allocator<TSP::UnarchiverReference> >* _references;
	vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> >* _repeatedReferences;
	vector<void ()(), std::__1::allocator<void ()()> >* _finalizeHandlers;

}

@property (nonatomic,readonly) BOOL isFromCopy; 
@property (nonatomic,readonly) BOOL isCrossDocumentPaste; 
@property (nonatomic,readonly) BOOL isCrossAppPaste; 
@property (nonatomic,readonly) BOOL hasPreUFFVersion; 
@property (nonatomic,readonly) unsigned long long preUFFVersion; 
@property (nonatomic,readonly) unsigned messageType;                                     //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,readonly) unsigned long long messageVersion;                        //@synthesize messageVersion=_messageVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) BOOL documentHasCurrentFileFormatVersion; 
@property (nonatomic,readonly) BOOL hasDocumentVersionUUID; 
@property (nonatomic,readonly) long long objectIdentifier;                               //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * objectUUID; 
@property (nonatomic,readonly) TSPUnknownContent * unknownContent;                       //@synthesize unknownContent=_unknownContent - In the implementation block
@property (nonatomic,__weak,readonly) id<TSPObjectDelegate> objectDelegate;              //@synthesize objectDelegate=_objectDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<TSPUnarchiverDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL canValidateReferences; 
-(BOOL)isFromCopy;
-(BOOL)isCrossDocumentPaste;
-(BOOL)isCrossAppPaste;
-(void)readSparseReferenceArrayMessage:(const SparseReferenceArray*)arg1 isWeak:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)readSparseReferenceArrayMessage:(const SparseReferenceArray*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readSparseWeakReferenceArrayMessage:(const SparseReferenceArray*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readSparseWeakObjectUUIDReferenceArrayMessage:(const SparseUUIDArray*)arg1 ;
-(id)readSparseWeakObjectUUIDPathReferenceArrayMessage:(const SparseUUIDPathArray*)arg1 ;
-(set<long long, std::__1::less<long long>, std::__1::allocator<long long> >Ref)filterIdentifiers:(const set<long long, std::__1::less<long long>, std::__1::allocator<long long> >Ref)arg1 ;
-(unsigned long long)preUFFVersion;
-(BOOL)hasPreUFFVersion;
-(void)readReferenceMessage1:(const Reference*)arg1 message2:(const Reference*)arg2 completion:(/*^block*/id)arg3 ;
-(void)readWeakReferenceMessage1:(const Reference*)arg1 message2:(const Reference*)arg2 completion:(/*^block*/id)arg3 ;
-(void)readReferenceMessage:(const Reference*)arg1 repeatedMessage:(const RepeatedPtrField<TSP::Reference>*)arg2 completion:(/*^block*/id)arg3 ;
-(void)readWeakReferenceMessage:(const Reference*)arg1 repeatedMessage:(const RepeatedPtrField<TSP::Reference>*)arg2 completion:(/*^block*/id)arg3 ;
-(TSPUnknownContent *)unknownContent;
-(id<TSPObjectDelegate>)objectDelegate;
-(NSUUID *)objectUUID;
-(unsigned long long)fileFormatVersion;
-(unsigned long long)messageVersion;
-(hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >*)strongReferences;
-(void)readWeakReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readReferenceMessage:(const Reference*)arg1 isWeak:(BOOL)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 weakSelector:(SEL)arg6 completion:(/*^block*/id)arg7 ;
-(void)validateReferenceToObjectIdentifier:(long long)arg1 isWeak:(BOOL*)arg2 validateStrongReferences:(BOOL)arg3 selector:(SEL)arg4 weakSelector:(SEL)arg5 ;
-(void)readRepeatedReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 isWeak:(BOOL)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 completion:(/*^block*/id)arg6 ;
-(void)readRepeatedWeakReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readLazyReferenceMessage:(const Reference*)arg1 isWeak:(BOOL)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 delegate:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)readWeakLazyReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 isWeak:(BOOL)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 delegate:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)readRepeatedWeakLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasDocumentVersionUUID;
-(void)readWeakReferenceToObjectUUID:(id)arg1 delegate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)canValidateReferences;
-(void)readReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readUnownedReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readRepeatedReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readRepeatedUnownedReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readLazyReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readDataReferenceMessage:(const DataReference*)arg1 ;
-(BOOL)documentHasCurrentFileFormatVersion;
-(void)addFinalizeHandler:(/*^block*/id)arg1 ;
-(id)readWeakObjectUUIDReferenceMessage:(const UUID*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readWeakObjectUUIDPathReferenceMessage:(const UUIDPath*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readRepeatedWeakObjectUUIDReferenceMessage:(const RepeatedPtrField<TSP::UUID>*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readRepeatedWeakObjectUUIDPathReferenceMessage:(const RepeatedPtrField<TSP::UUIDPath>*)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithMessageType:(unsigned)arg1 message:(auto_ptr<google::protobuf::Message>*)arg2 identifier:(long long)arg3 strongReferences:(auto_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > >*)arg4 fieldInfos:(auto_ptr<TSP::FieldInfoTree>*)arg5 messageVersion:(unsigned long long)arg6 unknownMessages:(id)arg7 ignoreVersionChecking:(BOOL)arg8 objectDelegate:(id)arg9 lazyReferenceDelegate:(id)arg10 delegate:(id)arg11 error:(id*)arg12 ;
-(vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> >*)repeatedReferences;
-(vector<void ()(), std::__1::allocator<void ()()> >*)finalizeHandlers;
-(void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 isWeak:(BOOL)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 completion:(/*^block*/id)arg6 ;
-(id<TSPUnarchiverDelegate>)delegate;
-(const Message*)message;
-(long long)objectIdentifier;
-(vector<TSP::UnarchiverReference, std::__1::allocator<TSP::UnarchiverReference> >*)references;
-(unsigned)messageType;
@end

