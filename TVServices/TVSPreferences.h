@interface TVSPreferences : NSObject
+(TVSPreferences*)preferencesWithDomain:(id)domain;
-(void)setObject:(id)object forKey:(id)key;
-(id)objectForKey:(id)key;
@end
