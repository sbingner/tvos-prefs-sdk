@interface TVSPreferenceManager : NSObject
+(TVSPreferenceManager*)sharedInstance; 
-(void)enableDistributedSyncForDomain:(id)domain;
@end
