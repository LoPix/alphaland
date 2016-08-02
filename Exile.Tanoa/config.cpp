/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 200000;

	/*
		A list of all characters allowed in a clan *name*

		NOTE: 
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ._-!:\\/";

	/*

		Maximum markers per clan

	*/
	maximumIcons = 20;

	/*
		Maximum number of characters on a Marker in a presistent system

		Note: MAX 255!
		
	*/
	maximumIconText = 50;

	/*

		Maximum poly markers per clan

	*/
	maximumPolys = 10;


	/* 

		Maximum points in poly
	*/
	maximumPolyNode = 10;
};
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
	requiresConcreteMixer = 0; // Check if concrete mixer is nearby
};

class CfgCraftingRecipes
{
class BreachingChargeBigMomma: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Big Momma)";
	pictureItem = "Exile_Item_BreachingCharge_BigMomma";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_BigMomma"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{3, "Exile_Item_BreachingCharge_Metal"},
		{1, "Exile_Item_MobilePhone"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_ZipTie"}
	};
	
	category = "Explosive";
	
};
class BreachingChargeMetal: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Metal)";
	pictureItem = "Exile_Item_BreachingCharge_Metal";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Metal"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{1, "SatchelCharge_Remote_Mag"}
	};
	
	category = "Explosive";
	
};
class BreachingChargeWood: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Wood)";
	pictureItem = "Exile_Item_BreachingCharge_Wood";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Wood"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{1, "DemoCharge_Remote_Mag"}
	};
	
	category = "Explosive";
	
};	
class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name = "Cook BBQ Sandwich";
	pictureItem = "Exile_Item_BBQSandwich_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_BBQSandwich_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_BBQSandwich"}
	};
	
	category = "Food";
	
};
class CookMacasCheese: Exile_AbstractCraftingRecipe
{
	name = "Cook Macas Cheese";
	pictureItem = "Exile_Item_MacasCheese_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MacasCheese_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MacasCheese"}
	};
	
	category = "Food";
	
};
class CookCatFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Food";
	pictureItem = "Exile_Item_CatFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatFood"}
	};
	
	category = "Food";
	
};

class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name = "Cook Christmas Tinner";
	pictureItem = "Exile_Item_ChristmasTinner_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChristmasTinner"}
	};
	
	category = "Food";
	
};
class CookCoffee: Exile_AbstractCraftingRecipe
{
	name = "Brew Coffee";
	pictureItem = "Exile_Item_PlasticBottleCoffee";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleCoffee"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleFreshWater"},
		{1, "Exile_Item_InstantCoffee"}
	};
	
	category = "Drinks";
	
};
class CookDogFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Dog Food";
	pictureItem = "Exile_Item_DogFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_DogFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_DogFood"}
	};
	
	category = "Food";
	
};

class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name = "Cook Glorious Knakworst";
	pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GloriousKnakworst"}
	};
	
	category = "Food";
	
};

class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	
	category = "Drinks";
	
};
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	
	category = "Drinks";
	
};

class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name = "Cook Sausage Gravy";
	pictureItem = "Exile_Item_SausageGravy_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SausageGravy_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SausageGravy"}
	};
	
	category = "Food";
	
};
class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
	pictureItem = "Exile_Item_Surstromming_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Surstromming_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_Surstromming"}
	};
	
	category = "Food";
	
};
class CraftConcreteDoorway: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Doorway";
	pictureItem = "Exile_Item_ConcreteDoorwayKit";
	requiresConcreteMixer = true;
	tools[] = 
	{
		"Exile_Item_Shovel"
	};	
	returnedItems[] =	
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Components";
	
};
class CraftConcreteFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor";
	pictureItem = "Exile_Item_ConcreteFloorKit";
	requiresConcreteMixer = true;
	tools[] = 
	{
		"Exile_Item_Shovel"
	};	
	returnedItems[] =	
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Components";
	
};
class CraftConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiresConcreteMixer = true;
	tools[] = 
	{
		"Exile_Item_Shovel"
	};	
	returnedItems[] = 	
	{
		{1, "Exile_Item_ConcreteFloorPortKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Components";
	
};
class CraftConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiresConcreteMixer = true;
	tools[] = 
	{
		"Exile_Item_Shovel"
	};	
	returnedItems[] = 	
	{
		{1, "Exile_Item_ConcreteGateKit"},
		{4, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_MetalPole"},
		{4, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Components";
	
};
class CraftConcretStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Stairs";
	pictureItem = "Exile_Item_ConcreteStairsKit";
	requiresConcreteMixer = true;
	tools[] = 
	{
		"Exile_Item_Shovel"
	};	
	returnedItems[] =	
	{
		{1, "Exile_Item_ConcreteStairsKit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Components";
	
};
class CraftConcretSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Support";
	pictureItem = "Exile_Item_ConcreteSupportKit";
	requiresConcreteMixer = true;
	tools[] = 
	{
		"Exile_Item_Shovel"
	};	
	returnedItems[] =	
	{
		{1, "Exile_Item_ConcreteSupportKit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Components";
	
};
class CraftConcreteWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Wall";
	pictureItem = "Exile_Item_ConcreteWallKit";
	requiresConcreteMixer = true;
	tools[] = 
	{
		"Exile_Item_Shovel"
	};	
	returnedItems[] = 	
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Components";
	
};
class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodLog"},
		{1, "Exile_Item_Magazine02"}		
	};
	
	category = "Equipment";
	
};
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Craft Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_FloodLightKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_Rope"},
		{1, "Exile_Item_ExtensionCord"}
	};
	tools[] = {"Exile_Item_Screwdriver"};
	
	category = "Components";
	
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; //<< CHANGE IT
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = {"Exile_Item_Grinder"};
	
	category = "Hardware";
	
};
class CraftHBarrier5Kit: Exile_AbstractCraftingRecipe
{
	name = "Craft H-barrier (5 Blocks)";
	pictureItem = "Exile_Item_HBarrier5Kit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Pliers"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_HBarrier5Kit"}
	};
	components[] = 
	{
		{3, "Exile_Item_SandBagsKit_Long"},
		{2, "Exile_Item_MetalWire"}
	};
	
	category = "Components";
	
};
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalBoard"}
	};
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
	
	category = "Hardware";
	
};
class CraftMetalHedgehog: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Hedgehog";
	pictureItem = "Exile_Item_MetalHedgehogKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalHedgehogKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder"};
	
	category = "Equipment";
	
};
class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
	
	category = "Hardware";
	
};
class CraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Craft Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Screwdriver"};
	
	category = "Components";
	
};
class CraftRepairKitConcrete: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Repair Kit";
	pictureItem = "Exile_Item_Cement";
	requiresConcreteMixer = true;
	tools[] = 
	{
		"Exile_Item_Shovel"
	};	
	returnedItems[] = 	
	{
		{1, "Exile_Item_RepairKitConcrete"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Components";
	
};
class CraftRepairKitMetal: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Repair Kit";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitWood"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Grinder"
	};
	
	category = "Components";
	
};
class CraftRepairKitWood: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Repair Kit";
	pictureItem = "Exile_Item_WoodPlank";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitWood"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox"
	};
	
	category = "Components";
	
};
class CraftSandBagsKitCorner: Exile_AbstractCraftingRecipe
{
	name = "Craft Sandbags Kit (Corner)";
	pictureItem = "Exile_Item_SandBagsKit_Corner";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Shovel"
	};	
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Corner"}
	};
	components[] = 
	{
		{3, "Exile_Item_Sand"}
	};
	
	category = "Components";
	
};
class CraftSandBagsKitLong: Exile_AbstractCraftingRecipe
{
	name = "Craft Sand Bags Kit (Long)";
	pictureItem = "Exile_Item_SandBagsKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Shovel"
	};	
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Long"}
	};
	components[] = 
	{
		{6, "Exile_Item_Sand"}
	};
	
	category = "Components Upgrade";
	
};
class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	tools[] = {"Exile_Item_CordlessScrewdriver"};
	
	category = "Components";
	
};
class CraftWaterBarrel: Exile_AbstractCraftingRecipe
{
	name = "Craft Water Barrel";
	pictureItem = "Exile_Item_WaterBarrelKit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_WaterBarrelKit"}
	};
	components[] = 
	{
		{20, "Exile_Item_PlasticBottleEmpty"}, 
		{2, "Exile_Item_FuelBarrelEmpty"}		
	};
	tools[] = {"Exile_Item_Knife"};
	
	category = "Components";
	
};
class CraftWireFenceKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Wire Fence Kit";
	pictureItem = "Exile_Item_WireFenceKit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_WireFenceKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"},
		{6, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
	
	category = "Components";
	
};
class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	tools[] = {"Exile_Item_CordlessScrewdriver"};

	category = "Components";
	
};
class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	tools[] = {"Exile_Item_CordlessScrewdriver"};
	
	category = "Components";
	
};
class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	tools[] = {"Exile_Item_CordlessScrewdriver"};
	
	category = "Components";
	
};
class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	tools[] = {"Exile_Item_CordlessScrewdriver"};
	
	category = "Components";
	
};
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] = {"Exile_Item_Handsaw"};
	
	category = "Equipment";
	
};
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	tools[] = {"Exile_Item_CordlessScrewdriver"};
	
	category = "Components";
	
};
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	tools[] = {"Exile_Item_CordlessScrewdriver"};
	
	category = "Components";
	
};
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	tools[] = {"Exile_Item_CordlessScrewdriver"};
	
	category = "Components";
	
};
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Craft 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	tools[] = {"Exile_Item_CordlessScrewdriver"};
	
	category = "Components";
	
};
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	tools[] = {"Exile_Item_CordlessScrewdriver"};
	
	category = "Components";
	
};
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodLog"}
	};
	
	category = "Equipment";
	
};
class EmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Dirty Water";
	pictureItem = "Exile_Item_WaterCanisterEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	
	category = "Equipment";	
	
};
class EmptyFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Empty Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterEmpty";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Equipment";
	
};
class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	
	category = "Drinks";
	
};
class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Salt Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	
	category = "Drinks";
	
};
class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	
	category = "Drinks";
	
};
class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Fresh Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	
	category = "Drinks";
	
};
class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "Exile_Item_PlasticBottleSaltWater";
	requiresOcean = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	
	category = "Drinks";
	
};
class FillEmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_WaterCanisterDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	
	category = "Equipment";	
	
};
class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
	requiredInteractionModelGroup = "FuelSource";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	
	category = "Equipment";	
	
};
class UpgradeToConcreteDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Door";
	pictureItem = "Exile_Item_ConcreteDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};	
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};

	category = "Components Upgrade";
	
};
class UpgradeToConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};	
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	
	category = "Components Upgrade";	
	
};
class UpgradeToConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};	
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	
	category = "Components Upgrade";	
	
};
class UpgradeToConcreteWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Window";
	pictureItem = "Exile_Item_ConcreteWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};	
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	
	category = "Components Upgrade";	
	
};
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	tools[] = {"Exile_Item_CordlessScrewdriver"};
	
	category = "Components Upgrade";	
	
};
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodFloorKit"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	tools[] = {"Exile_Item_CordlessScrewdriver"};
	
	category = "Components Upgrade";	
	
};
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	tools[] = {"Exile_Item_CordlessScrewdriver"};
	
	category = "Components Upgrade";	
	
};
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodWallHalfKit"},
		{1, "Exile_Item_MetalScrews"}		
	};
	tools[] = {"Exile_Item_CordlessScrewdriver"};
	
	category = "Components Upgrade";	
	
};
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	tools[] = {"Exile_Item_CordlessScrewdriver"};
	
	category = "Components Upgrade";	
	
};
// Individuelle Crafting Rezepte
 class CraftBandage: Exile_AbstractCraftingRecipe
{
    name = "Craft Bandage";
    pictureItem = "Exile_Item_Bandage";		
    returnedItems[] =
    {		
        {1, "Exile_Item_Bandage"}		
    };
    components[] =
    {		
        {6, "Exile_Item_ToiletPaper"}
    };
	tools[] = {"Exile_Item_Knife"};	
	
	category = "FirstAid";	
	
};
class CraftVishpirin: Exile_AbstractCraftingRecipe
{
    name = "Craft Vishpirin";
    pictureItem = "Exile_Item_Vishpirin";
    returnedItems[] =
    {		
        {1, "Exile_Item_Vishpirin"}		
    };
    components[] =
    {
        {5, "Exile_Item_Bandage"},		
        {2, "Exile_Item_Heatpack"},
        {1, "Exile_Item_PlasticBottleFreshWater"}	
    };
	tools[] = {"Exile_Item_Pliers"};

	category = "FirstAid";
	
};
class CraftInstaDoc: Exile_AbstractCraftingRecipe
{
    name = "Craft Insta Doc";
    pictureItem = "Exile_Item_InstaDoc";
	requiresFire = 1;		
    returnedItems[] =
    {
        {1, "Exile_Item_InstaDoc"}
    };
    components[] =
    {
        {4, "Exile_Item_Vishpirin"},
        {2, "Exile_Item_Beer"},
        {1, "Exile_Item_PlasticBottleFreshWater"}
    };
    tools[] = {"Exile_Item_CookingPot"};

	category = "FirstAid";
	
};
 class CraftCanOpener: Exile_AbstractCraftingRecipe
{
    name = "Craft Can Opener";
    pictureItem = "Exile_Item_CanOpener";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {		
        {1, "Exile_Item_CanOpener"}
    };	
    components[] =
    {		
        {12, "Exile_Item_Can_Empty"}	
    };	
	tools[] = {"Exile_Item_Pliers"};

	category = "Equipment";
	
};
 class CraftCookingPot: Exile_AbstractCraftingRecipe
{
    name = "Craft Cooking Pot";
    pictureItem = "Exile_Item_CookingPot";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] =
    {		
        {1, "Exile_Item_CookingPot"}
    };	
    components[] =
    {		
        {3, "Exile_Item_MetalWire"},
        {6, "Exile_Item_Can_Empty"}		
    };	
	tools[] = {"Exile_Item_Hammer"};

	category = "Equipment";
	
};
 class CraftMetalScrews: Exile_AbstractCraftingRecipe
{
    name = "Craft Metal Screws";
    pictureItem = "Exile_Item_MetalScrews";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] =
    {		
        {2, "Exile_Item_MetalScrews"}
    };	
    components[] =
    {		
        {10, "Exile_Item_Can_Empty"}		
    };	
	tools[] = {"Exile_Item_Pliers"};

	category = "Hardware";
	
};
 class CraftMetalWire: Exile_AbstractCraftingRecipe
{
    name = "Metal Wire";
    pictureItem = "Exile_Item_MetalWire";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] =
    {		
        {1, "Exile_Item_MetalWire"}
    };	
    components[] =
    {		
        {4, "Exile_Item_Can_Empty"},
        {1, "Exile_Item_Rope"}			
    };	
	tools[] = {"Exile_Item_Pliers"};

	category = "Hardware";
	
};
 class CraftJunkMetal: Exile_AbstractCraftingRecipe
{
    name = "Craft Junk Metal";
    pictureItem = "Exile_Item_JunkMetal";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] =
    {		
        {1, "Exile_Item_JunkMetal"}
    };	
    components[] =
    {		
        {4, "Exile_Item_CookingPot"}		
    };	
	tools[] = {"Exile_Item_Hammer"};

	category = "Hardware";
	
};
 class CraftDuctTape: Exile_AbstractCraftingRecipe
{
    name = "Craft Duct Tape";
    pictureItem = "Exile_Item_DuctTape";
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] =
    {		
        {1, "Exile_Item_DuctTape"}
    };	
    components[] =
    {		
        {10, "Exile_Item_ZipTie"}	
    };	
	tools[] = {"Exile_Item_Knife"};
	
	category = "Hardware";	
	
};
 class Foolbox: Exile_AbstractCraftingRecipe
{
    name = "Craft Foolbox";
    pictureItem = "Exile_Item_Foolbox";
	requiredInteractionModelGroup = "WorkBench";
    returnedItems[] = 
    {
        {1, "Exile_Item_Foolbox"}
    };
        components[] =
    {
        {1, "Exile_Item_Pliers"},
        {1, "Exile_Item_Grinder"},
        {1, "Exile_Item_CordlessScrewdriver"},
        {1, "Exile_Item_Handsaw"},
        {1, "Exile_Item_Hammer"},
        {1, "Exile_Item_Screwdriver"},
        {1, "Exile_Item_Knife"},		
        {1, "Exile_Item_Wrench"}
    };
	
	category = "Hardware";		
	
};	
 class CraftKnifer: Exile_AbstractCraftingRecipe
{
    name = "Craft a Knifer";
    pictureItem = "Exile_Item_Knife";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {		
        {1, "Exile_Item_Knife"}
    };	
    components[] =
    {		
        {1, "Exile_Item_MetalBoard"},	
        {1, "Exile_Item_WoodLog"},
        {1, "Exile_Item_Rope"}		
    };	
	tools[] = {"Exile_Item_Hammer"};

	category = "Equipment";
	
};
class CraftCarWheel: Exile_AbstractCraftingRecipe
{
	name = "Craft Car Wheel";
	pictureItem = "Exile_Item_CarWheel";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_CarWheel"}
	};
	components[] = 
	{
		{6, "Exile_Item_RubberDuck"}
	};
	tools[] = {"Exile_Item_Foolbox"};
	
	category = "Hardware";
	
};
class CraftToiletpaper: Exile_AbstractCraftingRecipe
{
    name = "Craft ToiletPaper";
    pictureItem = "Exile_Item_ToiletPaper";
    returnedItems[] =
    {
        {2, "Exile_Item_ToiletPaper"}
    };
    components[] =
    {
        {2, "Exile_Item_Magazine01"},
        {2, "Exile_Item_Magazine02"},
        {2, "Exile_Item_Magazine03"},
        {2, "Exile_Item_Magazine04"}
    };
	
	category = "Equipment";	
	
};
};
class CfgExileArsenal
{
	///////////////////////////////////////////////////////////////////////////////
	// Civillian Clothing
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Uniform_BambiOverall				{ quality = 1; price = 175; sellPrice = 1; };	
	class U_C_Journalist 							{ quality = 1; price = 100; sellPrice = 10; };
	class U_C_Poloshirt_blue 						{ quality = 1; price = 100; sellPrice = 10; };
	class U_C_Poloshirt_burgundy 					{ quality = 1; price = 100; sellPrice = 10; };
	class U_C_Poloshirt_salmon 						{ quality = 1; price = 100; sellPrice = 10; };
	class U_C_Poloshirt_stripped 					{ quality = 1; price = 100; sellPrice = 10; };
	class U_C_Poloshirt_tricolour 					{ quality = 1; price = 100; sellPrice = 10; };
	class U_C_Poloshirt_redwhite 					{ quality = 1; price = 100; sellPrice = 10; };	
	class U_C_Poor_1 								{ quality = 1; price = 150; sellPrice = 15; };
	class U_C_Poor_shorts_1 						{ quality = 1; price = 150; sellPrice = 15; };
	class U_C_Scientist 							{ quality = 1; price = 100; sellPrice = 10; };
	class U_OrestesBody 							{ quality = 3; price = 200; sellPrice = 20; };
	class U_C_WorkerCoveralls 						{ quality = 1; price = 200; sellPrice = 20; };	
	class U_Rangemaster 							{ quality = 1; price = 200; sellPrice = 20; };
	class U_Competitor 								{ quality = 2; price = 200; sellPrice = 20; };
	class U_Marshal							        { quality = 2; price = 200; sellPrice = 20; };
	class U_C_HunterBody_grn						{ quality = 2; price = 225; sellPrice = 22; };	
	class U_C_Driver_1 						        { quality = 2; price = 170; sellPrice = 17; }; 
	class U_C_Driver_2 					            { quality = 2; price = 170; sellPrice = 17; };
	class U_C_Driver_3 						        { quality = 2; price = 170; sellPrice = 17; }; 
	class U_C_Driver_4 					            { quality = 2; price = 170; sellPrice = 17; };
	class U_C_Driver_1_black 					    { quality = 2; price = 170; sellPrice = 17; };
	class U_C_Driver_1_blue 						{ quality = 2; price = 170; sellPrice = 17; };
	class U_C_Driver_1_green 						{ quality = 2; price = 170; sellPrice = 17; };
	class U_C_Driver_1_red 						    { quality = 2; price = 170; sellPrice = 17; };
	class U_C_Driver_1_white 						{ quality = 2; price = 170; sellPrice = 17; };
	class U_C_Driver_1_yellow 						{ quality = 2; price = 170; sellPrice = 17; };
	class U_C_Driver_1_orange 						{ quality = 2; price = 170; sellPrice = 17; };
	class Exile_Uniform_ExileCustoms				{ quality = 2; price = 250; sellPrice = 15; };	
	class U_I_C_Soldier_Bandit_1_F 					{ quality = 2; price = 160; sellPrice = 16; }; 
	class U_I_C_Soldier_Bandit_2_F 					{ quality = 2; price = 160; sellPrice = 16; };
	class U_I_C_Soldier_Bandit_3_F 					{ quality = 2; price = 160; sellPrice = 16; }; 
	class U_I_C_Soldier_Bandit_4_F 					{ quality = 2; price = 160; sellPrice = 16; };
	class U_I_C_Soldier_Bandit_5_F 					{ quality = 2; price = 160; sellPrice = 16; };	
	class U_C_Man_casual_1_F 					    { quality = 1; price = 150; sellPrice = 15; }; 
	class U_C_Man_casual_2_F 					    { quality = 1; price = 150; sellPrice = 15; };
	class U_C_Man_casual_3_F 					    { quality = 1; price = 150; sellPrice = 15; }; 
	class U_C_Man_casual_4_F 					    { quality = 1; price = 100; sellPrice = 10; }; 
	class U_C_Man_casual_5_F 					    { quality = 1; price = 100; sellPrice = 10; };
	class U_C_Man_casual_6_F 					    { quality = 1; price = 100; sellPrice = 10; };
	class U_C_man_sport_1_F 					    { quality = 2; price = 160; sellPrice = 16; }; 
	class U_C_man_sport_2_F 					    { quality = 2; price = 160; sellPrice = 16; };
	class U_C_man_sport_3_F 					    { quality = 2; price = 160; sellPrice = 16; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Soldier Uniforms
	/////////////////////////////////////////////////////////////////////////////// 	
	class U_B_CombatUniform_mcam 					{ quality = 2; price = 250; sellPrice = 25; }; 
	class U_B_CombatUniform_mcam_tshirt 			{ quality = 2; price = 250; sellPrice = 25; };
	class U_B_CombatUniform_mcam_vest 				{ quality = 2; price = 250; sellPrice = 25; }; 
	class U_B_CombatUniform_mcam_worn 				{ quality = 2; price = 250; sellPrice = 25; };
	class U_B_CTRG_1 								{ quality = 2; price = 250; sellPrice = 25; };
	class U_B_CTRG_2 								{ quality = 2; price = 250; sellPrice = 25; }; 
	class U_B_CTRG_3								{ quality = 2; price = 250; sellPrice = 25; };
	class U_I_CombatUniform 						{ quality = 2; price = 250; sellPrice = 25; };
	class U_I_CombatUniform_shortsleeve				{ quality = 2; price = 250; sellPrice = 25; };
	class U_I_OfficerUniform						{ quality = 2; price = 250; sellPrice = 25; };	
	class U_I_CombatUniform_tshirt					{ quality = 2; price = 250; sellPrice = 25; };		
	class U_O_CombatUniform_ocamo 					{ quality = 2; price = 250; sellPrice = 25; };
	class U_O_CombatUniform_oucamo 					{ quality = 2; price = 250; sellPrice = 25; };
	class U_O_OfficerUniform_ocamo 					{ quality = 3; price = 400; sellPrice = 40; };
	class U_B_SpecopsUniform_sgg 					{ quality = 3; price = 400; sellPrice = 40; };
	class U_O_SpecopsUniform_blk 					{ quality = 3; price = 400; sellPrice = 40; };	
	class U_O_SpecopsUniform_ocamo 					{ quality = 3; price = 400; sellPrice = 40; };
	class Exile_Uniform_Woodland 					{ quality = 3; price = 550; sellPrice = 55; };
	class U_O_V_Soldier_Viper_F 					{ quality = 4; price = 650; sellPrice = 60; };
	class U_O_V_Soldier_Viper_hex_F 				{ quality = 4; price = 650; sellPrice = 60; };	
	class U_B_T_Soldier_F						    { quality = 2; price = 250; sellPrice = 25; };
	class U_B_T_Soldier_AR_F 					    { quality = 2; price = 250; sellPrice = 25; };	
	class U_B_T_Soldier_SL_F					    { quality = 2; price = 250; sellPrice = 25; };	
	class U_B_CTRG_Soldier_urb_1_F 					{ quality = 2; price = 250; sellPrice = 25; }; 
	class U_B_CTRG_Soldier_urb_2_F 			        { quality = 2; price = 250; sellPrice = 25; };
	class U_B_CTRG_Soldier_urb_3_F 				    { quality = 2; price = 250; sellPrice = 25; }; 	
	class U_B_CTRG_Soldier_F 					    { quality = 2; price = 250; sellPrice = 25; }; 
	class U_B_CTRG_Soldier_2_F 			            { quality = 2; price = 250; sellPrice = 25; };
	class U_B_CTRG_Soldier_3_F 				        { quality = 2; price = 250; sellPrice = 25; };
	class U_I_C_Soldier_Camo_F 					    { quality = 3; price = 400; sellPrice = 40; };
	class U_O_T_Soldier_F						    { quality = 2; price = 250; sellPrice = 25; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Guerilla Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_I_G_Story_Protagonist_F 				{ quality = 3; price = 275; sellPrice = 27; };
	class U_BG_Guerrilla_6_1						{ quality = 2; price = 210; sellPrice = 21; };
	class U_BG_Guerilla1_1							{ quality = 2; price = 210; sellPrice = 21; };
	class U_BG_Guerilla2_2							{ quality = 2; price = 210; sellPrice = 21; };
	class U_BG_Guerilla2_3							{ quality = 2; price = 210; sellPrice = 21; };
	class U_BG_Guerilla3_1							{ quality = 2; price = 275; sellPrice = 27; };
	class U_BG_leader								{ quality = 3; price = 210; sellPrice = 21; };
	class U_IG_leader								{ quality = 3; price = 210; sellPrice = 21; };	
	class U_IG_Guerilla2_1						    { quality = 2; price = 210; sellPrice = 21; };
	class U_IG_Guerilla1_1							{ quality = 2; price = 210; sellPrice = 21; };
	class U_IG_Guerilla2_2							{ quality = 2; price = 210; sellPrice = 21; };
	class U_IG_Guerilla2_3							{ quality = 2; price = 210; sellPrice = 21; };
	class U_IG_Guerilla3_1							{ quality = 2; price = 275; sellPrice = 27; };		
	class U_I_G_resistanceLeader_F					{ quality = 3; price = 225; sellPrice = 22; };
	class U_B_GEN_Commander_F						{ quality = 3; price = 225; sellPrice = 22; };
	class U_B_GEN_Soldier_F							{ quality = 3; price = 225; sellPrice = 22; };	
	class U_O_T_Officer_F							{ quality = 3; price = 225; sellPrice = 22; };	
	class U_I_C_Soldier_Para_1_F					{ quality = 2; price = 210; sellPrice = 21; };
	class U_I_C_Soldier_Para_2_F					{ quality = 2; price = 210; sellPrice = 21; }; 
	class U_I_C_Soldier_Para_3_F					{ quality = 2; price = 210; sellPrice = 21; };
	class U_I_C_Soldier_Para_4_F					{ quality = 2; price = 210; sellPrice = 21; };
	class U_I_C_Soldier_Para_5_F					{ quality = 2; price = 210; sellPrice = 21; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Ghillie Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_B_FullGhillie_ard						{ quality = 6; price = 550; sellPrice = 55; };
	class U_B_FullGhillie_lsh						{ quality = 6; price = 550; sellPrice = 55; };
	class U_B_FullGhillie_sard						{ quality = 6; price = 550; sellPrice = 55; };
	class U_B_GhillieSuit							{ quality = 5; price = 400; sellPrice = 40; };
	class U_I_FullGhillie_ard						{ quality = 6; price = 550; sellPrice = 55; };
	class U_I_FullGhillie_lsh						{ quality = 6; price = 550; sellPrice = 55; };
	class U_I_FullGhillie_sard						{ quality = 6; price = 550; sellPrice = 55; };
	class U_I_GhillieSuit							{ quality = 5; price = 400; sellPrice = 40; };
	class U_O_FullGhillie_ard						{ quality = 6; price = 550; sellPrice = 55; };
	class U_O_FullGhillie_lsh						{ quality = 6; price = 550; sellPrice = 55; };
	class U_O_FullGhillie_sard						{ quality = 6; price = 550; sellPrice = 55; };
	class U_O_GhillieSuit							{ quality = 5; price = 400; sellPrice = 40; };
	class U_O_T_Sniper_F						    { quality = 5; price = 500; sellPrice = 50; };
	class U_B_T_Sniper_F 						    { quality = 5; price = 500; sellPrice = 50; };	
	class U_O_T_FullGhillie_tna_F					{ quality = 6; price = 550; sellPrice = 55; };
	class U_B_T_FullGhillie_tna_F				    { quality = 6; price = 550; sellPrice = 55; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Wet Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_I_Wetsuit								{ quality = 3; price = 600; sellPrice = 60; };
	class U_O_Wetsuit								{ quality = 3; price = 600; sellPrice = 60; };
	class U_B_Wetsuit								{ quality = 3; price = 600; sellPrice = 60; };
	class U_B_survival_uniform						{ quality = 2; price = 500; sellPrice = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandolliers
	///////////////////////////////////////////////////////////////////////////////
	class V_BandollierB_blk							{ quality = 1; price = 80; sellPrice = 8; };
	class V_BandollierB_cbr							{ quality = 1; price = 80; sellPrice = 8; };
	class V_BandollierB_khk							{ quality = 1; price = 80; sellPrice = 8; };
	class V_BandollierB_oli							{ quality = 1; price = 80; sellPrice = 8; };
	class V_BandollierB_rgr							{ quality = 1; price = 80; sellPrice = 8; };
	class V_BandollierB_ghex_F					    { quality = 1; price = 80; sellPrice = 8; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Chestrigs
	///////////////////////////////////////////////////////////////////////////////
	class V_Chestrig_blk 							{ quality = 1; price = 120; sellPrice = 12; };
	class V_Chestrig_khk 							{ quality = 1; price = 120; sellPrice = 12; };
	class V_Chestrig_oli 							{ quality = 1; price = 120; sellPrice = 12; };
	class V_Chestrig_rgr 							{ quality = 1; price = 120; sellPrice = 12; };
	class V_TacChestrig_grn_F 						{ quality = 1; price = 120; sellPrice = 12; };	
	class V_TacChestrig_oli_F 						{ quality = 1; price = 120; sellPrice = 12; };
	class V_TacChestrig_cbr_F 						{ quality = 1; price = 120; sellPrice = 12; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Vests
	///////////////////////////////////////////////////////////////////////////////
	class V_Press_F									{ quality = 1; price = 50; sellPrice = 5; };
	class V_Rangemaster_belt						{ quality = 1; price = 25; sellPrice = 2; };
	class V_TacVest_blk								{ quality = 2; price = 250; sellPrice = 25; };
	class V_TacVest_blk_POLICE						{ quality = 3; price = 300; sellPrice = 30; };
	class V_TacVest_brn								{ quality = 2; price = 250; sellPrice = 25; };
	class V_TacVest_camo							{ quality = 2; price = 250; sellPrice = 25; };
	class V_TacVest_khk								{ quality = 2; price = 250; sellPrice = 25; };
	class V_TacVest_oli								{ quality = 2; price = 250; sellPrice = 25; };
	class V_TacVestIR_blk							{ quality = 2; price = 250; sellPrice = 25; };
	class V_I_G_resistanceLeader_F					{ quality = 2; price = 250; sellPrice = 25; };	
	class V_TacVest_gen_F						    { quality = 3; price = 300; sellPrice = 30; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Harnesses
	///////////////////////////////////////////////////////////////////////////////
	class V_HarnessO_brn							{ quality = 1; price = 140; sellPrice = 14; };
	class V_HarnessO_gry							{ quality = 1; price = 140; sellPrice = 14; };
	class V_HarnessOGL_brn							{ quality = 1; price = 120; sellPrice = 12; };
	class V_HarnessOGL_gry							{ quality = 1; price = 120; sellPrice = 12; };
	class V_HarnessO_ghex_F							{ quality = 1; price = 140; sellPrice = 14; };
	class V_HarnessOGL_ghex_F						{ quality = 1; price = 120; sellPrice = 12; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Plate Carriers
	///////////////////////////////////////////////////////////////////////////////
	class V_PlateCarrier1_blk 						{ quality = 1; price = 400; sellPrice = 40; };
	class V_PlateCarrier1_rgr 						{ quality = 1; price = 400; sellPrice = 40; };
	class V_PlateCarrier2_blk 						{ quality = 2; price = 500; sellPrice = 50; };	
	class V_PlateCarrier2_rgr 						{ quality = 2; price = 500; sellPrice = 50; };
	class V_PlateCarrier3_rgr 						{ quality = 2; price = 500; sellPrice = 50; };
	class V_PlateCarrier2_tna_F						{ quality = 2; price = 500; sellPrice = 50; };	
	class Exile_Vest_Snow 						    { quality = 3; price = 500; sellPrice = 50; };		
	class V_PlateCarrier_Kerry 						{ quality = 2; price = 400; sellPrice = 40; };	
	class V_PlateCarrierGL_blk 						{ quality = 6; price = 5000; sellPrice = 200; };
	class V_PlateCarrierGL_mtp 						{ quality = 6; price = 5000; sellPrice = 200; };
	class V_PlateCarrierGL_rgr 						{ quality = 6; price = 5000; sellPrice = 200; };
	class V_PlateCarrierH_CTRG 						{ quality = 2; price = 500; sellPrice = 50; };
	class V_PlateCarrierIA1_dgtl 					{ quality = 2; price = 400; sellPrice = 40; };
	class V_PlateCarrierIA2_dgtl 					{ quality = 3; price = 500; sellPrice = 50; };
	class V_PlateCarrierIAGL_dgtl 					{ quality = 6; price = 4800; sellPrice = 150; };
	class V_PlateCarrierIAGL_oli 					{ quality = 6; price = 4800; sellPrice = 150; };
	class V_PlateCarrierL_CTRG 						{ quality = 3; price = 500; sellPrice = 50; };
	class V_PlateCarrierSpec_blk 					{ quality = 5; price = 2500; sellPrice = 100; };
	class V_PlateCarrierSpec_mtp 					{ quality = 5; price = 2500; sellPrice = 100; };
	class V_PlateCarrierSpec_rgr 					{ quality = 5; price = 2500; sellPrice = 100; };
	class V_PlateCarrier1_rgr_noflag_F 				{ quality = 1; price = 400; sellPrice = 40; };
	class V_PlateCarrier1_tna_F 					{ quality = 1; price = 400; sellPrice = 40; };
	class V_PlateCarrier2_rgr_noflag_F 				{ quality = 2; price = 500; sellPrice = 50; };		
	class V_PlateCarrierSpec_tna_F 					{ quality = 5; price = 2500; sellPrice = 100; };	
	class V_PlateCarrierGL_tna_F  					{ quality = 6; price = 5000; sellPrice = 200; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_Cap_blk 								{ quality = 1; price = 30; sellPrice = 3; };
	class H_Cap_blk_Raven 							{ quality = 1; price = 30; sellPrice = 3; };
	class H_Cap_blu 								{ quality = 1; price = 30; sellPrice = 3; };
	class H_Cap_brn_SPECOPS 						{ quality = 1; price = 30; sellPrice = 3; };
	class H_Cap_grn 								{ quality = 1; price = 30; sellPrice = 3; };
	class H_Cap_headphones 							{ quality = 1; price = 30; sellPrice = 3; };
	class H_Cap_khaki_specops_UK 					{ quality = 1; price = 30; sellPrice = 3; };
	class H_Cap_oli 								{ quality = 1; price = 30; sellPrice = 3; };
	class H_Cap_press 								{ quality = 1; price = 30; sellPrice = 3; }; 
	class H_Cap_red 								{ quality = 1; price = 30; sellPrice = 3; };
	class H_Cap_tan 								{ quality = 1; price = 30; sellPrice = 3; }; 
	class H_Cap_tan_specops_US 						{ quality = 1; price = 30; sellPrice = 3; };
	class Exile_Cap_Exile 							{ quality = 1; price = 30; sellPrice = 3; };
	class H_Cap_grn_BI 						        { quality = 1; price = 30; sellPrice = 3; };
	class H_Cap_oli_hs 							    { quality = 1; price = 30; sellPrice = 3; };	
	class H_Cap_blk_CMMG 							{ quality = 1; price = 30; sellPrice = 3; };
	class H_Cap_usblack 							{ quality = 1; price = 30; sellPrice = 3; }; 
	class H_Cap_surfer 								{ quality = 1; price = 30; sellPrice = 3; };
	class H_Cap_police 								{ quality = 1; price = 30; sellPrice = 3; }; 
	class H_Cap_marshal 						    { quality = 1; price = 30; sellPrice = 3; };
	class H_Cap_blk_ION 							{ quality = 1; price = 30; sellPrice = 3; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Glasses
	///////////////////////////////////////////////////////////////////////////////
	class G_Diving 								    { quality = 2; price = 40; sellPrice = 2; };
	class G_I_Diving 							    { quality = 2; price = 40; sellPrice = 2; };	
	class G_O_Diving 							    { quality = 2; price = 40; sellPrice = 2; };	
	class G_B_Diving 								{ quality = 2; price = 40; sellPrice = 2; };	
	class G_Combat							        { quality = 2; price = 20; sellPrice = 1; };
	class G_Tactical_Clear 							{ quality = 1; price = 10; sellPrice = 1; };
	class G_Shades_Black 						    { quality = 1; price = 10; sellPrice = 1; };
	class G_Shades_Blue 							{ quality = 1; price = 10; sellPrice = 1; };
	class G_Sport_Blackred 							{ quality = 1; price = 10; sellPrice = 1; };
	class G_Spectacles 					            { quality = 1; price = 10; sellPrice = 1; };
	class G_Spectacles_Tinted 						{ quality = 1; price = 10; sellPrice = 1; };
	class G_Lowprofile 								{ quality = 1; price = 10; sellPrice = 1; };
	class G_Shades_Green 							{ quality = 1; price = 10; sellPrice = 1; };
	class G_Shades_Red 								{ quality = 1; price = 10; sellPrice = 1; };
	class G_Squares 						        { quality = 1; price = 10; sellPrice = 1; };
	class G_Squares_Tinted 							{ quality = 1; price = 10; sellPrice = 1; };
	class G_Sport_BlackWhite 						{ quality = 1; price = 10; sellPrice = 1; };
	class G_Sport_Blackyellow 						{ quality = 1; price = 10; sellPrice = 1; };
	class G_Sport_Greenblack 						{ quality = 1; price = 10; sellPrice = 1; };
	class G_Sport_Checkered 						{ quality = 1; price = 10; sellPrice = 1; };
	class G_Sport_Red 								{ quality = 1; price = 10; sellPrice = 1; };
	class G_Tactical_Black 						    { quality = 1; price = 10; sellPrice = 1; };
	class G_Goggles_VR 						        { quality = 1; price = 10; sellPrice = 1; };	
	class G_Aviator 						        { quality = 1; price = 10; sellPrice = 1; };
	class G_Lady_Blue 								{ quality = 1; price = 10; sellPrice = 1; };		
	class G_Combat_Goggles_tna_F					{ quality = 2; price = 20; sellPrice = 1; };
	class G_Balaclava_blk 							{ quality = 2; price = 20; sellPrice = 1; };
	class G_Balaclava_oli 						    { quality = 2; price = 20; sellPrice = 1; };
	class G_Bandanna_aviator 						{ quality = 1; price = 20; sellPrice = 1; };
	class G_Bandanna_beast 							{ quality = 1; price = 20; sellPrice = 1; };
	class G_Bandanna_blk 					        { quality = 1; price = 20; sellPrice = 1; };
	class G_Bandanna_khk 						    { quality = 1; price = 20; sellPrice = 1; };
	class G_Bandanna_oli 							{ quality = 1; price = 20; sellPrice = 1; };
	class G_Bandanna_shades 						{ quality = 1; price = 20; sellPrice = 1; };
	class G_Bandanna_tan 							{ quality = 1; price = 20; sellPrice = 1; };
	class G_Balaclava_combat				        { quality = 2; price = 20; sellPrice = 1; };
	class G_Balaclava_lowprofile 					{ quality = 2; price = 20; sellPrice = 1; };
	class G_Bandanna_sport 						    { quality = 2; price = 20; sellPrice = 1; };
	class G_Balaclava_TI_blk_F 						{ quality = 2; price = 20; sellPrice = 1; };
	class G_Balaclava_TI_G_tna_F 					{ quality = 2; price = 20; sellPrice = 1; };	
	class G_Balaclava_TI_tna_F 						{ quality = 2; price = 20; sellPrice = 1; };
	class G_Balaclava_TI_G_blk_F 					{ quality = 2; price = 20; sellPrice = 1; };
	class G_Lady_Mirror 							{ quality = 1; price = 10; sellPrice = 1; };
	class G_Lady_Dark 								{ quality = 1; price = 10; sellPrice = 1; };
	class G_Lady_Red 								{ quality = 1; price = 10; sellPrice = 1; };	

	///////////////////////////////////////////////////////////////////////////////
	// Military Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_MilCap_blue 							{ quality = 1; price = 40; sellPrice = 4; };
	class H_MilCap_dgtl 							{ quality = 1; price = 40; sellPrice = 4; };
	class H_MilCap_mcamo 							{ quality = 1; price = 40; sellPrice = 4; };
	class H_MilCap_ocamo 							{ quality = 1; price = 40; sellPrice = 4; };
	class H_MilCap_gry 							    { quality = 1; price = 40; sellPrice = 4; };	
	class H_MilCap_oucamo 							{ quality = 1; price = 40; sellPrice = 4; };	
	class H_MilCap_gen_F 							{ quality = 1; price = 40; sellPrice = 4; };
	class H_MilCap_ghex_F 							{ quality = 1; price = 40; sellPrice = 4; };
	class H_MilCap_tna_F 							{ quality = 1; price = 40; sellPrice = 4; };		
	
	///////////////////////////////////////////////////////////////////////////////
	// Beanies
	///////////////////////////////////////////////////////////////////////////////
	class H_Watchcap_blk 							{ quality = 1; price = 30; sellPrice = 3; };
	class H_Watchcap_camo 							{ quality = 1; price = 30; sellPrice = 3; };
	class H_Watchcap_khk 							{ quality = 1; price = 30; sellPrice = 3; };
	class H_Watchcap_sgg 							{ quality = 1; price = 30; sellPrice = 3; };	
	class H_Watchcap_cbr 							{ quality = 1; price = 30; sellPrice = 3; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandannas
	///////////////////////////////////////////////////////////////////////////////
	class H_Bandanna_camo							{ quality = 1; price = 20; sellPrice = 2; };
	class H_Bandanna_cbr							{ quality = 1; price = 20; sellPrice = 2; };
	class H_Bandanna_gry							{ quality = 1; price = 20; sellPrice = 2; };
	class H_Bandanna_khk							{ quality = 1; price = 20; sellPrice = 2; };
	class H_Bandanna_khk_hs							{ quality = 1; price = 20; sellPrice = 2; };
	class H_Bandanna_mcamo							{ quality = 1; price = 20; sellPrice = 2; };
	class H_Bandanna_sgg							{ quality = 1; price = 20; sellPrice = 2; };
	class H_Bandanna_surfer							{ quality = 1; price = 20; sellPrice = 2; };
	class H_Bandanna_sand							{ quality = 1; price = 20; sellPrice = 2; };
	class H_Bandanna_surfer_blk						{ quality = 1; price = 20; sellPrice = 2; };
	class H_Bandanna_surfer_grn						{ quality = 1; price = 20; sellPrice = 2; };
	class H_Bandanna_blu							{ quality = 1; price = 20; sellPrice = 2; };
		
	///////////////////////////////////////////////////////////////////////////////
	// Boonie Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Booniehat_dgtl							{ quality = 1; price = 30; sellPrice = 3; };
	class H_Booniehat_grn							{ quality = 1; price = 30; sellPrice = 3; };
	class H_Booniehat_khk							{ quality = 1; price = 30; sellPrice = 3; };
	class H_Booniehat_khk_hs						{ quality = 1; price = 30; sellPrice = 3; };
	class H_Booniehat_oli						    { quality = 1; price = 30; sellPrice = 3; };	
	class H_Booniehat_mcamo							{ quality = 1; price = 30; sellPrice = 3; };
	class H_Booniehat_tan							{ quality = 1; price = 30; sellPrice = 3; };
	class H_Booniehat_tna_F							{ quality = 1; price = 30; sellPrice = 3; };		
	
	///////////////////////////////////////////////////////////////////////////////
	// Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Hat_blue								{ quality = 1; price = 30; sellPrice = 3; };
	class H_Hat_brown								{ quality = 1; price = 30; sellPrice = 3; };
	class H_Hat_camo								{ quality = 1; price = 30; sellPrice = 3; };
	class H_Hat_checker								{ quality = 1; price = 30; sellPrice = 3; };
	class H_Hat_grey								{ quality = 1; price = 30; sellPrice = 3; };
	class H_Hat_tan									{ quality = 1; price = 30; sellPrice = 3; };
	class H_StrawHat								{ quality = 1; price = 30; sellPrice = 3; };
	class H_StrawHat_dark							{ quality = 1; price = 30; sellPrice = 3; };
	class Exile_Headgear_SantaHat					{ quality = 1; price = 100; sellPrice = 5; };
	class Exile_Headgear_SafetyHelmet				{ quality = 2; price = 55; sellPrice = 5; };	

	///////////////////////////////////////////////////////////////////////////////
	// Berets
	///////////////////////////////////////////////////////////////////////////////
	class H_Beret_02								{ quality = 3; price = 45; sellPrice = 4; };
	class H_Beret_blk								{ quality = 2; price = 35; sellPrice = 3; };
	class H_Beret_Colonel							{ quality = 4; price = 45; sellPrice = 4; };	
	class H_Beret_gen_F							    { quality = 3; price = 40; sellPrice = 4; };			
	
	///////////////////////////////////////////////////////////////////////////////
	// Shemags
	///////////////////////////////////////////////////////////////////////////////
	class H_Shemag_olive							{ quality = 1; price = 48; sellPrice = 4; };
	class H_Shemag_olive_hs							{ quality = 1; price = 48; sellPrice = 4; };
	class H_ShemagOpen_khk							{ quality = 1; price = 48; sellPrice = 4; };
	class H_ShemagOpen_tan							{ quality = 1; price = 48; sellPrice = 4; };
	class H_Helmet_Skate							{ quality = 1; price = 150; sellPrice = 15; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Light Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetB_light							{ quality = 2; price = 250; sellPrice = 20; };
	class H_HelmetB_light_black						{ quality = 2; price = 250; sellPrice = 20; };
	class H_HelmetB_light_desert					{ quality = 2; price = 250; sellPrice = 20; };
	class H_HelmetB_light_grass						{ quality = 2; price = 250; sellPrice = 20; };
	class H_HelmetB_light_sand						{ quality = 2; price = 250; sellPrice = 20; };
	class H_HelmetB_light_snakeskin					{ quality = 2; price = 300; sellPrice = 30; };	
	class H_HelmetB_Light_tna_F					    { quality = 2; price = 300; sellPrice = 30; };			

	///////////////////////////////////////////////////////////////////////////////
	// Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetIA								{ quality = 3; price = 350; sellPrice = 30; };
	class H_HelmetB									{ quality = 3; price = 400; sellPrice = 40; };
	class H_HelmetB_black							{ quality = 3; price = 400; sellPrice = 40; };
	class H_HelmetB_camo							{ quality = 3; price = 450; sellPrice = 40; };
	class H_HelmetB_desert							{ quality = 3; price = 400; sellPrice = 40; };
	class H_HelmetB_grass							{ quality = 3; price = 400; sellPrice = 40; };
	class H_HelmetB_sand							{ quality = 3; price = 400; sellPrice = 40; };
	class H_HelmetB_snakeskin						{ quality = 3; price = 450; sellPrice = 40; };
	class H_HelmetB_tna_F							{ quality = 3; price = 450; sellPrice = 40; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Rennfahrhelm
	///////////////////////////////////////////////////////////////////////////////
	class H_RacingHelmet_1_F						{ quality = 2; price = 450; sellPrice = 40; };
	class H_RacingHelmet_2_F						{ quality = 2; price = 450; sellPrice = 40; };
	class H_RacingHelmet_3_F						{ quality = 2; price = 450; sellPrice = 40; };
	class H_RacingHelmet_4_F						{ quality = 2; price = 450; sellPrice = 40; };
	class H_RacingHelmet_1_black_F					{ quality = 2; price = 450; sellPrice = 40; };
	class H_RacingHelmet_1_blue_F					{ quality = 2; price = 450; sellPrice = 40; };
	class H_RacingHelmet_1_green_F					{ quality = 2; price = 450; sellPrice = 40; };
	class H_RacingHelmet_1_red_F					{ quality = 2; price = 450; sellPrice = 40; };
	class H_RacingHelmet_1_white_F					{ quality = 2; price = 450; sellPrice = 40; };
	class H_RacingHelmet_1_yellow_F					{ quality = 2; price = 450; sellPrice = 40; };
	class H_RacingHelmet_1_orange_F					{ quality = 2; price = 450; sellPrice = 40; };	

	///////////////////////////////////////////////////////////////////////////////
	// Spec Ops Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetSpecB								{ quality = 4; price = 500; sellPrice = 50; };
	class H_HelmetSpecB_blk							{ quality = 4; price = 500; sellPrice = 50; };
	class H_HelmetSpecB_paint1						{ quality = 4; price = 500; sellPrice = 50; };
	class H_HelmetSpecB_paint2						{ quality = 4; price = 500; sellPrice = 50; };
	class H_HelmetSpecB_snakeskin					{ quality = 4; price = 500; sellPrice = 50; };
	class H_HelmetSpecB_sand						{ quality = 4; price = 500; sellPrice = 50; };	
	class H_HelmetB_Enh_tna_F						{ quality = 4; price = 550; sellPrice = 50; };
	class H_HelmetB_TI_tna_F						{ quality = 4; price = 550; sellPrice = 50; };		
	
	///////////////////////////////////////////////////////////////////////////////
	// Super Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetO_ocamo							{ quality = 5; price = 650; sellPrice = 65; };
	class H_HelmetO_oucamo							{ quality = 5; price = 650; sellPrice = 65; };
	class H_HelmetSpecO_blk							{ quality = 5; price = 550; sellPrice = 55; };
	class H_HelmetSpecO_ocamo						{ quality = 5; price = 550; sellPrice = 55; };
	class H_HelmetLeaderO_ocamo						{ quality = 5; price = 700; sellPrice = 70; };
	class H_HelmetLeaderO_oucamo					{ quality = 5; price = 700; sellPrice = 70; };
	class H_HelmetSpecO_ghex_F						{ quality = 5; price = 550; sellPrice = 55; };	
	class H_HelmetO_ghex_F							{ quality = 5; price = 650; sellPrice = 65; };
	class H_HelmetLeaderO_ghex_F					{ quality = 5; price = 700; sellPrice = 70; };
	class H_HelmetO_ViperSP_ghex_F					{ quality = 6; price = 20000; sellPrice = 100; };
	class H_HelmetO_ViperSP_hex_F					{ quality = 6; price = 20000; sellPrice = 100; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Pilot Stuff
	///////////////////////////////////////////////////////////////////////////////
	class B_Parachute								{ quality = 3; price = 600; sellPrice = 150; };
	class H_CrewHelmetHeli_B						{ quality = 3; price = 650; sellPrice = 65; };
	class H_CrewHelmetHeli_I						{ quality = 3; price = 650; sellPrice = 65; };
	class H_CrewHelmetHeli_O						{ quality = 3; price = 650; sellPrice = 65; };
	class H_HelmetCrew_I							{ quality = 3; price = 550; sellPrice = 55; };
	class H_HelmetCrew_B							{ quality = 3; price = 550; sellPrice = 55; };
	class H_HelmetCrew_O							{ quality = 3; price = 550; sellPrice = 55; };
	class H_PilotHelmetHeli_B						{ quality = 4; price = 400; sellPrice = 40; };
	class H_PilotHelmetHeli_I						{ quality = 4; price = 400; sellPrice = 40; };
	class H_PilotHelmetHeli_O						{ quality = 4; price = 400; sellPrice = 40; };
	class U_B_HeliPilotCoveralls					{ quality = 2; price = 300; sellPrice = 30; };
	class U_B_PilotCoveralls						{ quality = 2; price = 350; sellPrice = 35; };
	class U_I_HeliPilotCoveralls					{ quality = 2; price = 300; sellPrice = 30; };
	class U_I_pilotCoveralls						{ quality = 2; price = 375; sellPrice = 38; };
	class U_O_PilotCoveralls						{ quality = 2; price = 375; sellPrice = 38; };
	class H_PilotHelmetFighter_B					{ quality = 5; price = 1800; sellPrice = 80; };
	class H_PilotHelmetFighter_I					{ quality = 5; price = 1800; sellPrice = 80; };
	class H_PilotHelmetFighter_O					{ quality = 5; price = 1800; sellPrice = 80; };	
	class H_HelmetCrew_O_ghex_F						{ quality = 3; price = 450; sellPrice = 45; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Pointer Attachments
	///////////////////////////////////////////////////////////////////////////////
	class acc_flashlight 							{ quality = 1; price = 20; sellPrice = 2; };
	class acc_pointer_IR 							{ quality = 1; price = 50; sellPrice = 5; };

	///////////////////////////////////////////////////////////////////////////////
	// Bitpod Attachments
	///////////////////////////////////////////////////////////////////////////////
	class bipod_01_F_blk	 						{ quality = 2; price = 50; sellPrice = 5; };
	class bipod_01_F_mtp	 						{ quality = 2; price = 50; sellPrice = 5; };
	class bipod_01_F_snd	 						{ quality = 2; price = 50; sellPrice = 5; };
	class bipod_02_F_blk	 						{ quality = 2; price = 50; sellPrice = 5; };
	class bipod_02_F_hex	 						{ quality = 2; price = 50; sellPrice = 5; };
	class bipod_02_F_tan	 						{ quality = 2; price = 50; sellPrice = 5; };
	class bipod_03_F_blk	 						{ quality = 2; price = 50; sellPrice = 5; };
	class bipod_03_F_oli	 						{ quality = 2; price = 50; sellPrice = 5; };
	class bipod_01_F_khk	 						{ quality = 2; price = 50; sellPrice = 5; };		
	
	///////////////////////////////////////////////////////////////////////////////
	// Muzzle Attachments
	///////////////////////////////////////////////////////////////////////////////
	class muzzle_snds_338_black 					{ quality = 6; price = 250; sellPrice = 25; };
	class muzzle_snds_338_green 					{ quality = 6; price = 250; sellPrice = 25; };
	class muzzle_snds_338_sand 						{ quality = 6; price = 250; sellPrice = 25; };
	class muzzle_snds_93mmg 						{ quality = 6; price = 250; sellPrice = 25; };
	class muzzle_snds_93mmg_tan 					{ quality = 6; price = 250; sellPrice = 25; };
	class muzzle_snds_acp 							{ quality = 1; price = 50; sellPrice = 5; };
	class muzzle_snds_B 							{ quality = 4; price = 125; sellPrice = 12; };
	class muzzle_snds_H 							{ quality = 3; price = 100; sellPrice = 10; };
	class muzzle_snds_H_MG 							{ quality = 3; price = 150; sellPrice = 15; };
	class muzzle_snds_H_SW 							{ quality = 3; price = 150; sellPrice = 15; };	
	class muzzle_snds_L 							{ quality = 1; price = 50; sellPrice = 5; };
	class muzzle_snds_M 							{ quality = 1; price = 75; sellPrice = 5; };
	class muzzle_snds_B_khk_F 						{ quality = 4; price = 125; sellPrice = 12; };	
	class muzzle_snds_B_snd_F 						{ quality = 4; price = 125; sellPrice = 12; };
	class muzzle_snds_H_MG_blk_F 					{ quality = 3; price = 150; sellPrice = 15; };
	class muzzle_snds_H_MG_khk_F 					{ quality = 3; price = 150; sellPrice = 15; };
	class muzzle_snds_H_khk_F 						{ quality = 3; price = 100; sellPrice = 10; };
	class muzzle_snds_H_snd_F 						{ quality = 3; price = 100; sellPrice = 10; };		
	class muzzle_snds_65_TI_blk_F 					{ quality = 3; price = 100; sellPrice = 10; };
	class muzzle_snds_65_TI_hex_F 					{ quality = 3; price = 100; sellPrice = 10; };
	class muzzle_snds_65_TI_ghex_F 					{ quality = 3; price = 100; sellPrice = 10; };	
	class muzzle_snds_58_blk_F 						{ quality = 1; price = 80; sellPrice = 6; };
	class muzzle_snds_58_wdm_F 						{ quality = 1; price = 80; sellPrice = 6; };
	class muzzle_snds_m_snd_F 						{ quality = 1; price = 75; sellPrice = 5; };	
	class muzzle_snds_m_khk_F 						{ quality = 1; price = 75; sellPrice = 5; };		
	
	///////////////////////////////////////////////////////////////////////////////
	// UAVS
	///////////////////////////////////////////////////////////////////////////////
	class I_UavTerminal								{ quality = 5; price = 3250; };
	class I_UAV_01_backpack_F						{ quality = 5; price = 12000; };
	class O_UavTerminal								{ quality = 5; price = 3250; };
	class O_UAV_01_backpack_F						{ quality = 5; price = 12000; };
	class B_UavTerminal								{ quality = 5; price = 3250; };
	class B_UAV_01_backpack_F						{ quality = 5; price = 12000; };
	///////////////////////////////////////////////////////////////////////////////
	// Static MGs
	///////////////////////////////////////////////////////////////////////////////
	class O_HMG_01_weapon_F 						{ quality = 6; price = 30000; };
	class O_HMG_01_support_F 						{ quality = 6; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Optic Attachments
	///////////////////////////////////////////////////////////////////////////////
	class optic_Aco									{ quality = 1; price = 350; sellPrice = 35; };
	class optic_ACO_grn								{ quality = 1; price = 350; sellPrice = 35; };
	class optic_ACO_grn_smg							{ quality = 1; price = 350; sellPrice = 35; };
	class optic_Aco_smg								{ quality = 1; price = 350; sellPrice = 35; };
	class optic_AMS									{ quality = 5; price = 1500; sellPrice = 150; };
	class optic_AMS_khk								{ quality = 5; price = 1500; sellPrice = 150; };
	class optic_AMS_snd								{ quality = 5; price = 1500; sellPrice = 150; };
	class optic_Arco								{ quality = 1; price = 500; sellPrice = 50; };
	class optic_DMS									{ quality = 2; price = 750; sellPrice = 75; };
	class optic_Hamr								{ quality = 3; price = 500; sellPrice = 50; };
	class optic_Holosight							{ quality = 1; price = 350; sellPrice = 35; };
	class optic_Holosight_smg						{ quality = 1; price = 350; sellPrice = 35; };
	class optic_KHS_blk								{ quality = 4; price = 1500; sellPrice = 150; };
	class optic_KHS_hex								{ quality = 4; price = 1500; sellPrice = 150; };
	class optic_KHS_old								{ quality = 4; price = 1500; sellPrice = 150; };
	class optic_KHS_tan								{ quality = 4; price = 1500; sellPrice = 150; };
	class optic_LRPS								{ quality = 5; price = 2500; sellPrice = 200; };
	class optic_MRCO								{ quality = 1; price = 550; sellPrice = 55; };
	class optic_MRD									{ quality = 1; price = 50; sellPrice = 5; };
	class optic_Nightstalker						{ quality = 6; price = 5000; sellPrice = 300; };
	class optic_NVS									{ quality = 4; price = 3000; sellPrice = 150; };
	class optic_SOS									{ quality = 2; price = 850; sellPrice = 85; };
	class optic_tws								    { quality = 6; price = 7500; sellPrice = 450; };
	class optic_tws_mg							    { quality = 6; price = 7250; sellPrice = 420; };
	class optic_Yorris								{ quality = 1; price = 50; sellPrice = 5; };
	class optic_Holosight_blk_F						{ quality = 1; price = 350; sellPrice = 35; };
	class optic_Holosight_smg_blk_F					{ quality = 1; price = 350; sellPrice = 35; };
	class optic_Holosight_khk_F						{ quality = 1; price = 350; sellPrice = 35; };	
	class optic_LRPS_tna_F							{ quality = 5; price = 2500; sellPrice = 200; };
	class optic_LRPS_ghex_F							{ quality = 5; price = 2500; sellPrice = 200; };	
	class optic_SOS_khk_F							{ quality = 2; price = 850; sellPrice = 85; };
	class optic_Hamr_khk_F							{ quality = 3; price = 500; sellPrice = 50; };	
	class optic_ERCO_blk_F							{ quality = 1; price = 500; sellPrice = 50; };
	class optic_ERCO_snd_F							{ quality = 1; price = 500; sellPrice = 50; };
	class optic_ERCO_khk_F							{ quality = 1; price = 500; sellPrice = 50; };
	class optic_DMS_ghex_F							{ quality = 2; price = 750; sellPrice = 75; };	
	class optic_Arco_blk_F							{ quality = 1; price = 500; sellPrice = 50; };
	class optic_Arco_ghex_F							{ quality = 1; price = 500; sellPrice = 50; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Hardware
	/////////////////////////////////////////////////////////////////////////////// 
	class Exile_Item_Rope							{ quality = 2; price = 20; };
	class Exile_Item_DuctTape						{ quality = 1; price = 300; sellPrice = 100; };
	class Exile_Item_ExtensionCord					{ quality = 1; price = 40; };
	class Exile_Item_FuelCanisterEmpty				{ quality = 1; price = 40; sellPrice = 10; };
	class Exile_Item_FuelBarrelEmpty				{ quality = 1; price = 40; sellPrice = 10; };	
	class Exile_Item_JunkMetal						{ quality = 1; price = 550; sellPrice = 50; };
	class Exile_Item_LightBulb						{ quality = 1; price = 20; };
	class Exile_Item_MetalBoard						{ quality = 1; price = 650; sellPrice = 100; };
	class Exile_Item_MetalHedgehogKit				{ quality = 1; price = 1200; sellPrice = 20; };
	class Exile_Item_SafeKit						{ quality = 1; price = 15000; };
	class Exile_Item_CodeLock						{ quality = 1; price = 7500; sellPrice = 2500; };
	class Exile_Item_Laptop						    { quality = 1; price = 10000; sellPrice = 2000; };
	class Exile_Item_BaseCameraKit				    { quality = 1; price = 5000; sellPrice = 310; };
	class Exile_Item_CamoTentKit					{ quality = 1; price = 350; sellPrice = 125; };
	class Exile_Item_MetalPole						{ quality = 1; price = 750; sellPrice = 200; };
	class Exile_Item_MetalScrews					{ quality = 1; price = 70; sellPrice = 8; };
	class Exile_Item_MetalWire						{ quality = 1; price = 100; sellPrice = 10; };
	class Exile_Item_Cement							{ quality = 1; price = 20; };
	class Exile_Item_Sand							{ quality = 1; price = 20; };
	class Exile_Item_WaterCanisterDirtyWater		{ quality = 1; price = 10; };
	class Exile_Item_WaterCanisterEmpty				{ quality = 1; price = 5; };	
	class Exile_Item_CarWheel						{ quality = 1; price = 400; sellPrice = 15; };
	class Exile_Item_WoodLog						{ quality = 1; price = 2; };
	class Exile_Item_WoodSticks						{ quality = 1; price = 2; };
	class Exile_Item_Leaves						    { quality = 1; price = 2; };	
	class Exile_Item_WoodPlank						{ quality = 1; price = 2; };
	class Exile_Item_WorkBenchKit					{ quality = 1; price = 8; };
	class Exile_Item_WoodDoorKit					{ quality = 1; price = 30; };
	class Exile_Item_WoodDoorwayKit					{ quality = 1; price = 30; };
	class Exile_Item_WoodFloorKit					{ quality = 1; price = 30; };
	class Exile_Item_WoodFloorPortKit				{ quality = 1; price = 30; };
	class Exile_Item_WoodGateKit					{ quality = 1; price = 30; };
	class Exile_Item_WoodStairsKit					{ quality = 1; price = 30; };
	class Exile_Item_WoodSupportKit					{ quality = 1; price = 30; };
	class Exile_Item_WoodWallHalfKit				{ quality = 1; price = 30; };
	class Exile_Item_WoodWallKit					{ quality = 1; price = 30; };
	class Exile_Item_RepairKitConcrete			    { quality = 1; price = 10; };
	class Exile_Item_RepairKitWood				    { quality = 1; price = 10; };
	class Exile_Item_SandBagsKit_Corner				{ quality = 1; price = 20; };
	class Exile_Item_SandBagsKit_Long				{ quality = 1; price = 20; };
	class Exile_Item_StorageCrateKit				{ quality = 1; price = 10; };
	class Exile_Item_WireFenceKit			        { quality = 1; price = 20; };
	class Exile_Item_ConcreteDoorwayKit				{ quality = 1; price = 30; };
	class Exile_Item_ConcreteFloorKit				{ quality = 1; price = 30; };
	class Exile_Item_ConcreteFloorPortKit			{ quality = 1; price = 30; };
	class Exile_Item_ConcreteGateKit				{ quality = 1; price = 30; };
	class Exile_Item_ConcreteStairsKit				{ quality = 1; price = 30; };
	class Exile_Item_ConcreteSupportKit				{ quality = 1; price = 30; };
	class Exile_Item_ConcreteWallKit				{ quality = 1; price = 30; };
	class Exile_Item_HBarrier5Kit				    { quality = 1; price = 20; };
	class Exile_Item_RazorWireKit_Long				{ quality = 1; price = 20; };	
	class Exile_Item_FuelCanisterFull				{ quality = 1; price = 85; sellPrice = 20; };
	class Exile_Item_CampFireKit					{ quality = 1; price = 8; };		
	class Exile_Item_FloodLightKit					{ quality = 1; price = 2500; sellPrice = 40; };
	class Exile_Item_PortableGeneratorKit			{ quality = 1; price = 4500; sellPrice = 60; };
	class Exile_Item_FortificationUpgrade			{ quality = 1; price = 1200; sellPrice = 350; };
	class Exile_Item_WoodWindowKit					{ quality = 1; price = 60; };
	class Exile_Item_Magazine01					    { quality = 1; price = 15; sellPrice = 1; };
	class Exile_Item_Magazine02					    { quality = 1; price = 15; sellPrice = 4; };
	class Exile_Item_Magazine03					    { quality = 1; price = 15; sellPrice = 2; };
	class Exile_Item_Magazine04					    { quality = 1; price = 15; sellPrice = 3; };	
	class Exile_Item_TreasureMap					{ quality = 1; price = 2; };	
	class Exile_Item_RubberDuck					    { quality = 1; price = 4; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Food
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_EMRE							{ quality = 3; price = 108; sellPrice = 27; };
	class Exile_Item_GloriousKnakworst				{ quality = 3; price = 80; sellPrice = 20; };
	class Exile_Item_Surstromming					{ quality = 3; price = 68; sellPrice = 17; };
	class Exile_Item_SausageGravy					{ quality = 3; price = 60; sellPrice = 15; };
	class Exile_Item_Catfood						{ quality = 2; price = 48; sellPrice = 12; };
	class Exile_Item_ChristmasTinner				{ quality = 3; price = 40; sellPrice = 10; };
	class Exile_Item_BBQSandwich					{ quality = 3; price = 40; sellPrice = 10; };
	class Exile_Item_Dogfood						{ quality = 2; price = 36; sellPrice = 9; };
	class Exile_Item_GloriousKnakworst_Cooked		{ quality = 3; price = 80; sellPrice = 20; };
	class Exile_Item_Dogfood_Cooked		            { quality = 2; price = 36; sellPrice = 9; };
	class Exile_Item_Surstromming_Cooked			{ quality = 3; price = 68; sellPrice = 17; };
	class Exile_Item_SausageGravy_Cooked			{ quality = 3; price = 60; sellPrice = 15; };
	class Exile_Item_ChristmasTinner_Cooked			{ quality = 3; price = 40; sellPrice = 10; };
	class Exile_Item_BBQSandwich_Cooked				{ quality = 3; price = 40; sellPrice = 10; };	
	class Exile_Item_MacasCheese			        { quality = 3; price = 40; sellPrice = 10; };
	class Exile_Item_MacasCheese_Cooked				{ quality = 3; price = 40; sellPrice = 10; };		
	class Exile_Item_Catfood_Cooked					{ quality = 2; price = 48; sellPrice = 12; };
	class Exile_Item_BeefParts						{ quality = 2; price = 36; sellPrice = 8; };
	class Exile_Item_Cheathas						{ quality = 2; price = 36; sellPrice = 8; };
	class Exile_Item_DsNuts						    { quality = 2; price = 36; sellPrice = 8; };	
	class Exile_Item_Noodles						{ quality = 1; price = 28; sellPrice = 8; };
	class Exile_Item_SeedAstics						{ quality = 1; price = 24; sellPrice = 6; };
	class Exile_Item_CockONut						{ quality = 1; price = 24; sellPrice = 6; };
	class Exile_Item_Raisins						{ quality = 1; price = 20; sellPrice = 6; };
	class Exile_Item_Moobar							{ quality = 1; price = 16; sellPrice = 4; };
	class Exile_Item_InstantCoffee					{ quality = 1; price = 40; sellPrice = 10; }
	class Exile_Item_Can_Empty						{ quality = 1; price = 2; sellPrice = 1; };

	///////////////////////////////////////////////////////////////////////////////
	// Drinks
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_PlasticBottleCoffee	 		{ quality = 3; price = 130; sellPrice = 20; };
	class Exile_Item_PowerDrink						{ quality = 3; price = 120; sellPrice = 25; };
	class Exile_Item_PlasticBottleFreshWater 		{ quality = 2; price = 100; sellPrice = 4; };
	class Exile_Item_PlasticBottleSaltWater 		{ quality = 2; price = 50; sellPrice = 4; };	
	class Exile_Item_PlasticBottleDirtyWater 		{ quality = 2; price = 40; sellPrice = 4; };
	class Exile_Item_Beer 							{ quality = 1; price = 110; sellPrice = 25; };
	class Exile_Item_EnergyDrink					{ quality = 2; price = 80; sellPrice = 20; };
	class Exile_Item_MountainDupe					{ quality = 1; price = 60; sellPrice = 15; };
	class Exile_Item_ChocolateMilk					{ quality = 1; price = 50; sellPrice = 10; };	
	class Exile_Item_PlasticBottleEmpty				{ quality = 1; price = 8; sellPrice = 2; };

	///////////////////////////////////////////////////////////////////////////////
	// First Aid
	///////////////////////////////////////////////////////////////////////////////	
	class Exile_Item_InstaDoc                       { quality = 5; price = 1200; sellPrice = 450; };	
	class Exile_Item_Vishpirin						{ quality = 3; price = 300; sellPrice = 150; };
	class Exile_Item_Bandage	                    { quality = 2; price = 125; sellPrice = 50; };
	class Exile_Item_Defibrillator				    { quality = 6; price = 7000; };
	class Exile_Item_Heatpack	                    { quality = 1; price = 50; sellPrice = 20; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Tools
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Matches 						{ quality = 1; price = 60; sellPrice = 20; };
	class Exile_Item_CookingPot						{ quality = 2; price = 80; sellPrice = 35; };
	class Exile_Melee_Axe							{ quality = 2; price = 900; sellPrice = 50; };
	class Exile_Melee_SledgeHammer					{ quality = 3; price = 900; sellPrice = 50; };
	class Exile_Melee_Shovel				        { quality = 3; price = 900; sellPrice = 50; };	
	class Exile_Item_CanOpener						{ quality = 1; price = 70; sellPrice = 25; };
	class Exile_Item_Handsaw						{ quality = 2; price = 500; sellPrice = 50; };
	class Exile_Item_Pliers							{ quality = 2; price = 350; sellPrice = 35; };
	class Exile_Item_Grinder						{ quality = 2; price = 1250; sellPrice = 175; };
	class Exile_Item_Foolbox						{ quality = 1; price = 4000; sellPrice = 500; };
	class Exile_Item_CordlessScrewdriver			{ quality = 2; price = 750; sellPrice = 150; };
	class Exile_Item_FireExtinguisher				{ quality = 2; price = 650; sellPrice = 250; };
	class Exile_Item_Hammer						    { quality = 2; price = 550; sellPrice = 55; };
	class Exile_Item_OilCanister					{ quality = 2; price = 950; sellPrice = 15; };
	class Exile_Item_Screwdriver					{ quality = 2; price = 250; sellPrice = 25; };
	class Exile_Item_Shovel						    { quality = 2; price = 500; sellPrice = 25; };
	class Exile_Item_Wrench	  				        { quality = 2; price = 250; sellPrice = 10; };
	class Exile_Item_Knife						    { quality = 2; price = 370; sellPrice = 25; };	
	//class Exile_Item_SleepingMat					{ quality = 2; price = 1250; };
	class Exile_Item_ToiletPaper					{ quality = 2; price = 6; sellPrice = 2; };
	class Exile_Item_ZipTie						    { quality = 2; price = 150; sellPrice = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Navigation
	///////////////////////////////////////////////////////////////////////////////
	class ItemWatch									{ quality = 1; price = 15; sellPrice = 2; };	
	class ItemGPS									{ quality = 6; price = 250; sellPrice = 20; };
	class ItemMap									{ quality = 1; price = 60; sellPrice = 2; };
	class ItemCompass								{ quality = 2; price = 100; sellPrice = 6; };
	class ItemRadio									{ quality = 2; price = 40; sellPrice = 4; };
	class Binocular									{ quality = 1; price = 200; sellPrice = 15; };
	class Rangefinder								{ quality = 4; price = 1000; sellPrice = 175; };
	class Laserdesignator							{ quality = 5; price = 3750; sellPrice = 350; };
	class Laserdesignator_02						{ quality = 5; price = 3750; sellPrice = 350; };
	class Laserdesignator_03						{ quality = 5; price = 3750; sellPrice = 350; };
	class NVGoggles									{ quality = 2; price = 500; sellPrice = 50; };
	class NVGoggles_INDEP							{ quality = 2; price = 500; sellPrice = 50; };
	class NVGoggles_OPFOR							{ quality = 2; price = 500; sellPrice = 50; };
	class Exile_Item_XM8							{ quality = 2; price = 20; sellPrice = 2; };
	class Exile_Item_MobilePhone					{ quality = 6; price = 500; sellPrice = 5; };	
	class NVGoggles_tna_F							{ quality = 2; price = 500; sellPrice = 50; };
	class O_NVGoggles_ghex_F						{ quality = 3; price = 600; sellPrice = 60; };
	class O_NVGoggles_urb_F							{ quality = 3; price = 600; sellPrice = 60; };	
	class O_NVGoggles_hex_F							{ quality = 3; price = 600; sellPrice = 60; };	
	class Laserdesignator_02_ghex_F					{ quality = 5; price = 3750; sellPrice = 350; };
	class Laserdesignator_01_khk_F					{ quality = 5; price = 3750; sellPrice = 350; };
	class NVGogglesB_grn_F						    { quality = 6; price = 10000; sellPrice = 550; };
	class NVGogglesB_gry_F						    { quality = 6; price = 10000; sellPrice = 550; };	
	class NVGogglesB_blk_F					    	{ quality = 6; price = 10000; sellPrice = 550; };		
	
	///////////////////////////////////////////////////////////////////////////////
	// Watch out for a Walter fart! He has gas!
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Headgear_GasMask					{ quality = 3; price = 800; sellPrice = 125; }; 

	///////////////////////////////////////////////////////////////////////////////
	// Rebreather
	///////////////////////////////////////////////////////////////////////////////
	class V_RebreatherB								{ quality = 2; price = 1250; sellPrice = 125; };
	class V_RebreatherIA							{ quality = 2; price = 1250; sellPrice = 125; };
	class V_RebreatherIR							{ quality = 2; price = 1250; sellPrice = 125; };

	///////////////////////////////////////////////////////////////////////////////
	// Backpacks
	///////////////////////////////////////////////////////////////////////////////
	class B_AssaultPack_blk							{ quality = 1; price = 450; sellPrice = 45; };
	class B_AssaultPack_cbr							{ quality = 1; price = 450; sellPrice = 45; };
	class B_AssaultPack_dgtl						{ quality = 1; price = 450; sellPrice = 45; };
	class B_AssaultPack_khk							{ quality = 1; price = 450; sellPrice = 45; };
	class B_AssaultPack_mcamo						{ quality = 1; price = 450; sellPrice = 45; };
	class B_AssaultPack_ocamo						{ quality = 1; price = 450; sellPrice = 45; };	
	class B_AssaultPack_rgr							{ quality = 1; price = 450; sellPrice = 45; };
	class B_AssaultPack_sgg							{ quality = 1; price = 450; sellPrice = 45; };
	class B_AssaultPack_Kerry						{ quality = 1; price = 450; sellPrice = 45; };	
	class B_FieldPack_blk							{ quality = 2; price = 600; sellPrice = 60; };
	class B_FieldPack_cbr							{ quality = 2; price = 600; sellPrice = 60; };
	class B_FieldPack_ocamo							{ quality = 2; price = 600; sellPrice = 60; };
	class B_FieldPack_oucamo						{ quality = 2; price = 600; sellPrice = 60; };	
	class B_FieldPack_oli							{ quality = 2; price = 600; sellPrice = 60; };
	class B_FieldPack_khk						    { quality = 2; price = 600; sellPrice = 60; };		
	class B_TacticalPack_blk						{ quality = 2; price = 750; sellPrice = 75; };
	class B_TacticalPack_rgr						{ quality = 2; price = 750; sellPrice = 75; };
	class B_TacticalPack_ocamo						{ quality = 2; price = 750; sellPrice = 75; };
	class B_TacticalPack_mcamo						{ quality = 2; price = 750; sellPrice = 75; };
	class B_TacticalPack_oli						{ quality = 2; price = 750; sellPrice = 75; };
	class B_Kitbag_cbr								{ quality = 3; price = 950; sellPrice = 95; };
	class B_Kitbag_mcamo							{ quality = 3; price = 950; sellPrice = 95; };
	class B_Kitbag_sgg								{ quality = 3; price = 950; sellPrice = 95; };
	class B_Kitbag_rgr								{ quality = 3; price = 950; sellPrice = 95; };	
	class B_Carryall_cbr							{ quality = 5; price = 1250; sellPrice = 125; };
	class B_Carryall_khk							{ quality = 5; price = 1250; sellPrice = 125; };
	class B_Carryall_mcamo							{ quality = 5; price = 1250; sellPrice = 125; };
	class B_Carryall_ocamo							{ quality = 5; price = 1250; sellPrice = 125; };
	class B_Carryall_oli							{ quality = 5; price = 1250; sellPrice = 125; };
	class B_Carryall_oucamo							{ quality = 5; price = 1250; sellPrice = 125; };
	class B_Bergen_blk								{ quality = 4; price = 950; sellPrice = 95; };
	class B_Bergen_mcamo							{ quality = 4; price = 950; sellPrice = 95; };
	class B_Bergen_rgr								{ quality = 4; price = 950; sellPrice = 95; };
	class B_Bergen_sgg								{ quality = 4; price = 950; sellPrice = 95; };
	class B_HuntingBackpack							{ quality = 1; price = 300; sellPrice = 30; };
	class B_OutdoorPack_blk							{ quality = 1; price = 300; sellPrice = 30; };
	class B_OutdoorPack_blu							{ quality = 1; price = 300; sellPrice = 30; };
	class B_OutdoorPack_tan							{ quality = 1; price = 300; sellPrice = 30; };
	class B_Carryall_ghex_F							{ quality = 5; price = 1250; sellPrice = 125; };	
	class B_FieldPack_ghex_F						{ quality = 2; price = 600; sellPrice = 60; };
	class B_AssaultPack_tna_F						{ quality = 1; price = 450; sellPrice = 45; };
	class B_Bergen_hex_F							{ quality = 6; price = 2000; sellPrice = 175; };
	class B_Bergen_tna_F							{ quality = 6; price = 2000; sellPrice = 175; };
	class B_Bergen_dgtl_F							{ quality = 6; price = 2000; sellPrice = 175; };
	class B_Bergen_mcamo_F							{ quality = 6; price = 2000; sellPrice = 175; };	
	class B_ViperLightHarness_ghex_F				{ quality = 2; price = 850; sellPrice = 85; };
	class B_ViperLightHarness_khk_F					{ quality = 2; price = 850; sellPrice = 85; };
	class B_ViperLightHarness_oli_F					{ quality = 2; price = 850; sellPrice = 85; };
	class B_ViperLightHarness_blk_F					{ quality = 2; price = 850; sellPrice = 85; };
	class B_ViperLightHarness_hex_F					{ quality = 2; price = 850; sellPrice = 85; };	
	class B_ViperHarness_oli_F						{ quality = 4; price = 1050; sellPrice = 100; };
	class B_ViperHarness_blk_F						{ quality = 4; price = 1050; sellPrice = 100; };
	class B_ViperHarness_khk_F						{ quality = 4; price = 1050; sellPrice = 100; };
	class B_ViperHarness_hex_F						{ quality = 4; price = 1050; sellPrice = 100; };	
	class B_ViperHarness_ghex_F				    	{ quality = 4; price = 1050; sellPrice = 100; };			
	
	///////////////////////////////////////////////////////////////////////////////
	// Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class 100Rnd_65x39_caseless_mag 				{ quality = 3; price = 500; sellPrice = 10; };
	class 100Rnd_65x39_caseless_mag_Tracer 			{ quality = 3; price = 550; sellPrice = 20; };
	class 10Rnd_127x54_Mag 							{ quality = 6; price = 150; sellPrice = 10; };
	class 10Rnd_338_Mag 							{ quality = 6; price = 180; sellPrice = 20; };
	class 10Rnd_762x54_Mag 							{ quality = 3; price = 70; sellPrice = 8; };
	class 10Rnd_93x64_DMR_05_Mag 					{ quality = 6; price = 200; sellPrice = 30; };
	class 11Rnd_45ACP_Mag 							{ quality = 1; price = 40; sellPrice = 6; };
	class 150Rnd_762x54_Box 						{ quality = 4; price = 1050; sellPrice = 30; };
	class 150Rnd_762x54_Box_Tracer 					{ quality = 4; price = 1100; sellPrice = 30; };
	class 16Rnd_9x21_Mag 							{ quality = 1; price = 50; sellPrice = 8; };
	class 16Rnd_9x21_red_Mag 						{ quality = 1; price = 50; sellPrice = 8; };	
	class 16Rnd_9x21_green_Mag 						{ quality = 1; price = 50; sellPrice = 8; };
	class 16Rnd_9x21_yellow_Mag 					{ quality = 1; price = 50; sellPrice = 8; };	
	class 200Rnd_65x39_cased_Box 					{ quality = 3; price = 1000; sellPrice = 20; };
	class 200Rnd_65x39_cased_Box_Tracer 			{ quality = 3; price = 1100; sellPrice = 25; };
	class 150Rnd_93x64_Mag 							{ quality = 6; price = 2800; sellPrice = 50; };
	class 130Rnd_338_Mag 							{ quality = 6; price = 2160; sellPrice = 44; };
	class 20Rnd_556x45_UW_mag 						{ quality = 1; price = 100; sellPrice = 10; };
	class 20Rnd_762x51_Mag 							{ quality = 3; price = 140; sellPrice = 10; };
	class 30Rnd_45ACP_Mag_SMG_01 					{ quality = 1; price = 60; sellPrice = 8; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green 		{ quality = 1; price = 60; sellPrice = 8; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow		{ quality = 1; price = 60; sellPrice = 8; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red			{ quality = 1; price = 60; sellPrice = 8; };
	class 30Rnd_556x45_Stanag 						{ quality = 1; price = 100; sellPrice = 10; };
	class 30Rnd_556x45_Stanag_Tracer_Green 			{ quality = 1; price = 120; sellPrice = 10; };
	class 30Rnd_556x45_Stanag_green  				{ quality = 1; price = 120; sellPrice = 10; };
	class 30Rnd_556x45_Stanag_Tracer_Red 			{ quality = 1; price = 120; sellPrice = 10; };
	class 30Rnd_556x45_Stanag_Tracer_Yellow 		{ quality = 1; price = 120; sellPrice = 10; };
	class 30Rnd_556x45_Stanag_red 					{ quality = 1; price = 120; sellPrice = 10; };
	class 30Rnd_65x39_caseless_green 				{ quality = 2; price = 150; sellPrice = 10; };
	class 30Rnd_65x39_caseless_green_mag_Tracer 	{ quality = 2; price = 160; sellPrice = 15; };
	class 30Rnd_65x39_caseless_mag 					{ quality = 2; price = 150; sellPrice = 10; };
	class 30Rnd_65x39_caseless_mag_Tracer 			{ quality = 2; price = 160; sellPrice = 15; };
	class 30Rnd_9x21_Mag 							{ quality = 1; price = 80; sellPrice = 9; };	
	class 30Rnd_9x21_Red_Mag 						{ quality = 1; price = 80; sellPrice = 9; };	
	class 30Rnd_9x21_Yellow_Mag 					{ quality = 1; price = 80; sellPrice = 9; };	
	class 30Rnd_9x21_Green_Mag 						{ quality = 1; price = 80; sellPrice = 9; };	
	class 5Rnd_127x108_APDS_Mag 					{ quality = 6; price = 340; sellPrice = 30; };
	class 5Rnd_127x108_Mag 							{ quality = 6; price = 240; sellPrice = 20; };
	class 6Rnd_45ACP_Cylinder 						{ quality = 1; price = 50; sellPrice = 8; };
	class 6Rnd_GreenSignal_F 						{ quality = 1; price = 60; sellPrice = 8; };
	class 6Rnd_RedSignal_F 							{ quality = 1; price = 60; sellPrice = 8; };
	class 7Rnd_408_Mag 								{ quality = 6; price = 300; sellPrice = 35; };
	class 9Rnd_45ACP_Mag 							{ quality = 1; price = 35; sellPrice = 4; };
	class 10Rnd_9x21_Mag 							{ quality = 1; price = 37; sellPrice = 4; };	
	class 30Rnd_9x21_Mag_SMG_02						{ quality = 1; price = 80; sellPrice = 9; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Red          { quality = 1; price = 80; sellPrice = 9; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow       { quality = 1; price = 80; sellPrice = 9; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Green        { quality = 1; price = 80; sellPrice = 9; };
	class 30Rnd_580x42_Mag_F                        { quality = 1; price = 120; sellPrice = 10; };
	class 30Rnd_580x42_Mag_Tracer_F                 { quality = 1; price = 120; sellPrice = 10; };
	class 100Rnd_580x42_Mag_F                       { quality = 1; price = 360; sellPrice = 15; };
	class 100Rnd_580x42_Mag_Tracer_F                { quality = 1; price = 360; sellPrice = 15; };
	class 20Rnd_650x39_Cased_Mag_F                  { quality = 2; price = 140; sellPrice = 10; };
	class 10Rnd_50BW_Mag_F                          { quality = 6; price = 320; sellPrice = 20; };
	class 150Rnd_556x45_Drum_Mag_F                  { quality = 1; price = 410; sellPrice = 20; };
	class 150Rnd_556x45_Drum_Mag_Tracer_F           { quality = 1; price = 410; sellPrice = 20; };
	class 200Rnd_556x45_Box_F                       { quality = 1; price = 450; sellPrice = 20; };
	class 200Rnd_556x45_Box_Red_F                   { quality = 1; price = 450; sellPrice = 20; };
	class 200Rnd_556x45_Box_Tracer_F                { quality = 1; price = 475; sellPrice = 20; };
	class 200Rnd_556x45_Box_Tracer_Red_F            { quality = 1; price = 475; sellPrice = 20; };	
	class 30Rnd_Green_Tracer_545x39_AK		        { quality = 2; price = 150; sellPrice = 10; };
	class 30Rnd_Red_Tracer_545x39_AK		        { quality = 2; price = 150; sellPrice = 10; };
	class 30Rnd_White_Tracer_545x39_AK		        { quality = 2; price = 130; sellPrice = 10; };
	class 30Rnd_Yellow_Tracer_545x39_AK		        { quality = 2; price = 130; sellPrice = 10; };
	class 45Rnd_Green_Tracer_545x39_RPK		        { quality = 2; price = 140; sellPrice = 10; };
	class 75Rnd_Green_Tracer_545x39_RPK		        { quality = 2; price = 160; sellPrice = 10; };	
	class 30Rnd_762x39_Mag_F				        { quality = 3; price = 170; sellPrice = 10; };
	class 30Rnd_762x39_Mag_Green_F				    { quality = 3; price = 170; sellPrice = 10; };
	class 30Rnd_762x39_Mag_Tracer_F				    { quality = 3; price = 180; sellPrice = 10; };	
	class 30Rnd_762x39_Mag_Tracer_Green_F		    { quality = 3; price = 180; sellPrice = 10; };	
	class 30Rnd_545x39_Mag_Tracer_Green_F			{ quality = 2; price = 150; sellPrice = 10; };
	class 30Rnd_545x39_Mag_Tracer_F			        { quality = 2; price = 160; sellPrice = 10; };
	class 30Rnd_545x39_Mag_Green_F			        { quality = 2; price = 150; sellPrice = 10; };
	class 30Rnd_545x39_Mag_F			            { quality = 2; price = 150; sellPrice = 10; };	
		
	///////////////////////////////////////////////////////////////////////////////
	// Flares
	///////////////////////////////////////////////////////////////////////////////
	class Chemlight_blue							{ quality = 1; price = 10; sellPrice = 1; };
	class Chemlight_green							{ quality = 1; price = 10; sellPrice = 1; };
	class Chemlight_red								{ quality = 1; price = 10; sellPrice = 1; };
	class Chemlight_yellow							{ quality = 1; price = 10; sellPrice = 1; };	
	class UGL_FlareGreen_F							{ quality = 2; price = 24; sellPrice = 3; };
	class UGL_FlareRed_F							{ quality = 2; price = 24; sellPrice = 3; };
	class UGL_FlareWhite_F							{ quality = 2; price = 24; sellPrice = 3; };
	class UGL_FlareYellow_F							{ quality = 2; price = 24; sellPrice = 3; };
	class 3Rnd_UGL_FlareGreen_F						{ quality = 3; price = 36; sellPrice = 6; };
	class 3Rnd_UGL_FlareRed_F						{ quality = 3; price = 36; sellPrice = 6; };
	class 3Rnd_UGL_FlareWhite_F						{ quality = 3; price = 36; sellPrice = 6; };
	class 3Rnd_UGL_FlareYellow_F					{ quality = 3; price = 36; sellPrice = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Smokes
	///////////////////////////////////////////////////////////////////////////////
	class SmokeShell								{ quality = 1; price = 12; sellPrice = 3; };
	class SmokeShellBlue							{ quality = 1; price = 12; sellPrice = 3; };
	class SmokeShellGreen							{ quality = 1; price = 12; sellPrice = 3; };
	class SmokeShellOrange							{ quality = 1; price = 12; sellPrice = 3; };
	class SmokeShellPurple							{ quality = 1; price = 12; sellPrice = 3; };
	class SmokeShellRed								{ quality = 1; price = 12; sellPrice = 3; };
	class SmokeShellYellow							{ quality = 1; price = 12; sellPrice = 3; };
	class 1Rnd_Smoke_Grenade_shell					{ quality = 2; price = 24; sellPrice = 4; };
	class 1Rnd_SmokeBlue_Grenade_shell				{ quality = 2; price = 24; sellPrice = 4; };
	class 1Rnd_SmokeGreen_Grenade_shell				{ quality = 2; price = 24; sellPrice = 4; };
	class 1Rnd_SmokeOrange_Grenade_shell			{ quality = 2; price = 24; sellPrice = 4; };
	class 1Rnd_SmokePurple_Grenade_shell			{ quality = 2; price = 24; sellPrice = 4; };
	class 1Rnd_SmokeRed_Grenade_shell				{ quality = 2; price = 24; sellPrice = 4; };
	class 1Rnd_SmokeYellow_Grenade_shell			{ quality = 2; price = 24; sellPrice = 4; };
	class 3Rnd_Smoke_Grenade_shell					{ quality = 3; price = 36; sellPrice = 5; };
	class 3Rnd_SmokeBlue_Grenade_shell				{ quality = 3; price = 36; sellPrice = 5; };
	class 3Rnd_SmokeGreen_Grenade_shell				{ quality = 3; price = 36; sellPrice = 5; };
	class 3Rnd_SmokeOrange_Grenade_shell			{ quality = 3; price = 36; sellPrice = 5; };
	class 3Rnd_SmokePurple_Grenade_shell			{ quality = 3; price = 36; sellPrice = 5; };
	class 3Rnd_SmokeRed_Grenade_shell				{ quality = 3; price = 36; sellPrice = 5; };
	class 3Rnd_SmokeYellow_Grenade_shell			{ quality = 3; price = 36; sellPrice = 5; };

	///////////////////////////////////////////////////////////////////////////////
	// Explosives
	///////////////////////////////////////////////////////////////////////////////
	class HandGrenade								{ quality = 3; price = 80; sellPrice = 20; };
	class MiniGrenade								{ quality = 2; price = 60; sellPrice = 15; };
	class B_IR_Grenade								{ quality = 1; price = 100; sellPrice = 20; };
	class O_IR_Grenade								{ quality = 1; price = 100; sellPrice = 20; };
	class I_IR_Grenade								{ quality = 1; price = 100; sellPrice = 20; };
	class 1Rnd_HE_Grenade_shell						{ quality = 2; price = 140; sellPrice = 30; };
	class 3Rnd_HE_Grenade_shell						{ quality = 3; price = 280; sellPrice = 60; };
	class APERSBoundingMine_Range_Mag				{ quality = 5; price = 800000; sellPrice = 2; };
	class APERSMine_Range_Mag						{ quality = 5; price = 900000; sellPrice = 2; };
	class APERSTripMine_Wire_Mag					{ quality = 5; price = 700000; sellPrice = 2; };
	class ClaymoreDirectionalMine_Remote_Mag		{ quality = 5; price = 900000; sellPrice = 2; };
	class DemoCharge_Remote_Mag						{ quality = 6; price = 1800000; sellPrice = 2; };
	class IEDLandBig_Remote_Mag						{ quality = 5; price = 1500000; sellPrice = 2; };
	class IEDLandSmall_Remote_Mag					{ quality = 6; price = 1800000; sellPrice = 2; };
	class IEDUrbanBig_Remote_Mag					{ quality = 6; price = 1800000; sellPrice = 2; };
	class IEDUrbanSmall_Remote_Mag					{ quality = 5; price = 1500000; sellPrice = 2; };
	class SatchelCharge_Remote_Mag					{ quality = 6; price = 2000000; sellPrice = 2; };
	class SLAMDirectionalMine_Wire_Mag				{ quality = 5; price = 1100000; sellPrice = 2; };	
	class Exile_Item_BreachingCharge_Wood			{ quality = 6; price = 2500000; sellPrice = 2; };
	class Exile_Item_BreachingCharge_Metal			{ quality = 6; price = 2500000; sellPrice = 2; };	
	class Exile_Item_BreachingCharge_BigMomma		{ quality = 6; price = 2500000; sellPrice = 2; };

	
	///////////////////////////////////////////////////////////////////////////////
	// Werfer
	///////////////////////////////////////////////////////////////////////////////
	class launch_O_Titan_F					{ quality = 6; price = 50000; sellPrice = 5; };
	class launch_I_Titan_F					{ quality = 6; price = 50000; sellPrice = 5; };
	class launch_B_Titan_F				    { quality = 6; price = 50000; sellPrice = 5; };	
	class launch_B_Titan_short_F			{ quality = 6; price = 50000; sellPrice = 5; };
	class launch_I_Titan_short_F			{ quality = 6; price = 50000; sellPrice = 5; };
	class launch_O_Titan_short_F			{ quality = 6; price = 50000; sellPrice = 5; };	
	class launch_NLAW_F					    { quality = 6; price = 50000; sellPrice = 5; };
	class launch_RPG32_F					{ quality = 6; price = 50000; sellPrice = 5; };
	class Titan_AA				            { quality = 6; price = 2500; sellPrice = 1; };
	class Titan_AP				            { quality = 6; price = 2500; sellPrice = 1; };	
	class Titan_AT				            { quality = 6; price = 2500; sellPrice = 1; };		
	class RPG32_HE_F				        { quality = 6; price = 2500; sellPrice = 1; };	
	class RPG32_F				            { quality = 6; price = 2500; sellPrice = 1; };	
	class NLAW_F				            { quality = 6; price = 2500; sellPrice = 1; };	
	class launch_O_Titan_ghex_F			    { quality = 6; price = 50000; sellPrice = 5; };
	class launch_O_Titan_short_ghex_F		{ quality = 6; price = 50000; sellPrice = 5; };
	class launch_RPG7_F			            { quality = 6; price = 50000; sellPrice = 5; };	
	class launch_B_Titan_short_tna_F	    { quality = 6; price = 50000; sellPrice = 5; };
	class launch_RPG32_ghex_F				{ quality = 6; price = 50000; sellPrice = 5; };
	class RPG7_F				            { quality = 6; price = 2500; sellPrice = 1; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Pistols
	///////////////////////////////////////////////////////////////////////////////
	class hgun_ACPC2_F 								{ quality = 1; price = 250; sellPrice = 25; };
	class hgun_P07_F 								{ quality = 1; price = 250; sellPrice = 25; };
	class hgun_Pistol_heavy_01_F 					{ quality = 2; price = 400; sellPrice = 40; };
	class hgun_Pistol_heavy_02_F 					{ quality = 2; price = 400; sellPrice = 40; };
	class hgun_Pistol_Signal_F 						{ quality = 1; price = 500; sellPrice = 50; };
	class hgun_Rook40_F 							{ quality = 1; price = 250; sellPrice = 25; };
	class hgun_Pistol_01_F 							{ quality = 1; price = 250; sellPrice = 25; };
	class hgun_P07_khk_F 					        { quality = 1; price = 300; sellPrice = 30; };		
	
	///////////////////////////////////////////////////////////////////////////////
	// Sub Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class hgun_PDW2000_F 							{ quality = 1; price = 500; sellPrice = 50; };
	class SMG_01_F 									{ quality = 1; price = 650; sellPrice = 75; };
	class SMG_02_F 									{ quality = 1; price = 650; sellPrice = 75; };
	class SMG_05_F 									{ quality = 1; price = 650; sellPrice = 75; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Light Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MX_SW_Black_F						{ quality = 3; price = 4450; sellPrice = 250; };
	class arifle_MX_SW_F							{ quality = 3; price = 4450; sellPrice = 250; };	
	class LMG_Mk200_F								{ quality = 3; price = 4650; sellPrice = 300; };	
	class LMG_Zafir_F								{ quality = 4; price = 4750; sellPrice = 350; };	
	class MMG_01_hex_F								{ quality = 6; price = 10000; sellPrice = 550; };
	class MMG_01_tan_F								{ quality = 6; price = 10000; sellPrice = 550; };
	class MMG_02_black_F							{ quality = 6; price = 9800; sellPrice = 500; };
	class MMG_02_camo_F								{ quality = 6; price = 9800; sellPrice = 500; };
	class MMG_02_sand_F								{ quality = 6; price = 9800; sellPrice = 500; };
	//class arifle_MX_SW_khk_F						{ quality = 3; price = 4450; sellPrice = 250; };
	class LMG_03_F								    { quality = 2; price = 4050; sellPrice = 200; };
	class arifle_CTARS_blk_F                        { quality = 2; price = 2300; sellPrice = 160; };
	class arifle_CTARS_hex_F                        { quality = 2; price = 2300; sellPrice = 160; };
	class arifle_CTARS_ghex_F                       { quality = 2; price = 2300; sellPrice = 160; };	
	class arifle_SPAR_02_blk_F                      { quality = 2; price = 2550; sellPrice = 180; };
	class arifle_SPAR_02_khk_F                      { quality = 2; price = 2550; sellPrice = 180; };
	class arifle_SPAR_02_snd_F                      { quality = 2; price = 2550; sellPrice = 180; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Assault Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_Katiba_C_F							{ quality = 2; price = 1150; sellPrice = 100; };
	class arifle_Katiba_F							{ quality = 2; price = 1150; sellPrice = 100; };
	class arifle_Katiba_GL_F						{ quality = 2; price = 1000; sellPrice = 150; };
	class arifle_Mk20_F								{ quality = 1; price = 750; sellPrice = 100; };
	class arifle_Mk20_GL_F							{ quality = 1; price = 1000; sellPrice = 150; };
	class arifle_Mk20_GL_plain_F					{ quality = 1; price = 1000; sellPrice = 150; };
	class arifle_Mk20_plain_F						{ quality = 1; price = 750; sellPrice = 100; };
	class arifle_Mk20C_F							{ quality = 1; price = 750; sellPrice = 100; };
	class arifle_Mk20C_plain_F						{ quality = 1; price = 750; sellPrice = 100; };
	class arifle_MX_Black_F							{ quality = 2; price = 2150; sellPrice = 225; };
	class arifle_MX_F								{ quality = 2; price = 2150; sellPrice = 225; };
	class arifle_MX_GL_Black_F						{ quality = 2; price = 2250; sellPrice = 250; };
	class arifle_MX_GL_F							{ quality = 2; price = 2250; sellPrice = 250; };
	class arifle_MXC_Black_F						{ quality = 2; price = 1750; sellPrice = 200; };
	class arifle_MXC_F								{ quality = 2; price = 1750; sellPrice = 200; };
	class arifle_SDAR_F								{ quality = 1; price = 750; sellPrice = 150; };
	class arifle_TRG20_F							{ quality = 1; price = 1250; sellPrice = 125; };
	class arifle_TRG21_F							{ quality = 1; price = 1250; sellPrice = 125; };
	class arifle_TRG21_GL_F							{ quality = 1; price = 1550; sellPrice = 150; };	
	class arifle_ARX_blk_F                          { quality = 5; price = 8350; sellPrice = 235; };
	class arifle_ARX_ghex_F                         { quality = 5; price = 8350; sellPrice = 235; };
	class arifle_ARX_hex_F                          { quality = 5; price = 8350; sellPrice = 235; };	
	class arifle_MX_khk_F                           { quality = 2; price = 2150; sellPrice = 225; };
	class arifle_MX_GL_khk_F                        { quality = 2; price = 2250; sellPrice = 250; };
	class arifle_MXC_khk_F                          { quality = 2; price = 1750; sellPrice = 200; };
	class arifle_SPAR_01_blk_F                      { quality = 1; price = 1250; sellPrice = 125; };
	class arifle_SPAR_01_khk_F                      { quality = 1; price = 1250; sellPrice = 125; };
	class arifle_SPAR_01_snd_F                      { quality = 1; price = 1250; sellPrice = 125; };
	class arifle_SPAR_01_GL_blk_F                   { quality = 1; price = 1550; sellPrice = 150; };
	class arifle_SPAR_01_GL_khk_F                   { quality = 1; price = 1550; sellPrice = 150; };
	class arifle_SPAR_01_GL_snd_F                   { quality = 1; price = 1550; sellPrice = 150; };	
	class arifle_AK12_F                             { quality = 3; price = 5500; sellPrice = 350; };
	class arifle_AK12_GL_F                          { quality = 3; price = 5750; sellPrice = 375; };
	class arifle_AKM_F                              { quality = 3; price = 5300; sellPrice = 330; };
	class Exile_Weapon_AK107						{ quality = 2; price = 3500; sellPrice = 350; };
	class Exile_Weapon_AK107_GL					    { quality = 2; price = 3750; sellPrice = 375; };
	class Exile_Weapon_AK74						    { quality = 2; price = 2150; sellPrice = 225; };
	class Exile_Weapon_AK74_GL						{ quality = 2; price = 2150; sellPrice = 225; };
	class Exile_Weapon_AK47							{ quality = 3; price = 4250; sellPrice = 300; };
	class arifle_AKS_F							    { quality = 2; price = 3000; sellPrice = 150; };	
	class Exile_Weapon_AKS_Gold						{ quality = 3; price = 4444; sellPrice = 155; };			
	class arifle_CTAR_blk_F                         { quality = 1; price = 850; sellPrice = 100; };
	class arifle_CTAR_GL_blk_F                      { quality = 1; price = 1100; sellPrice = 150; };	
	class arifle_CTAR_hex_F                         { quality = 1; price = 850; sellPrice = 100; };
	class arifle_CTAR_GL_ghex_F                     { quality = 1; price = 1100; sellPrice = 150; };
	class arifle_CTAR_GL_hex_F                      { quality = 1; price = 1100; sellPrice = 150; };	
	class arifle_CTAR_ghex_F                        { quality = 1; price = 850; sellPrice = 100; };		

	///////////////////////////////////////////////////////////////////////////////
	// Sniper Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MXM_Black_F 						{ quality = 2; price = 2350; sellPrice = 300; };
	class arifle_MXM_F 								{ quality = 2; price = 2350; sellPrice = 300; };
	class srifle_DMR_01_F 							{ quality = 3; price = 3000; sellPrice = 325; };	
	class srifle_DMR_02_camo_F 						{ quality = 6; price = 8000; sellPrice = 450; };
	class srifle_DMR_02_F 							{ quality = 6; price = 8000; sellPrice = 450; };
	class srifle_DMR_02_sniper_F 					{ quality = 6; price = 8000; sellPrice = 450; };
	class srifle_DMR_03_F 							{ quality = 3; price = 3750; sellPrice = 375; };
	class srifle_DMR_03_khaki_F 					{ quality = 3; price = 3750; sellPrice = 375; };
	class srifle_DMR_03_multicam_F 					{ quality = 3; price = 3750; sellPrice = 375; };
	class srifle_DMR_03_tan_F 						{ quality = 3; price = 3750; sellPrice = 375; };
	class srifle_DMR_03_woodland_F 					{ quality = 3; price = 3750; sellPrice = 375; };
	class srifle_DMR_04_F 							{ quality = 6; price = 8500; sellPrice = 425; };
	class srifle_DMR_04_Tan_F 						{ quality = 6; price = 8500; sellPrice = 425; };
	class srifle_DMR_05_blk_F 						{ quality = 6; price = 8200; sellPrice = 475; };
	class srifle_DMR_05_hex_F 						{ quality = 6; price = 8200; sellPrice = 475; };
	class srifle_DMR_05_tan_f 						{ quality = 6; price = 8200; sellPrice = 475; };
	class srifle_DMR_06_camo_F 						{ quality = 3; price = 3500; sellPrice = 350; };
	class srifle_DMR_06_olive_F 					{ quality = 3; price = 3500; sellPrice = 350; };
	class srifle_EBR_F 								{ quality = 3; price = 3500; sellPrice = 375; };	
	class srifle_GM6_camo_F 						{ quality = 6; price = 9500; sellPrice = 550; };
	class srifle_GM6_F 								{ quality = 6; price = 9500; sellPrice = 550; };	
	class srifle_LRR_camo_F 						{ quality = 6; price = 9000; sellPrice = 530; };
	class srifle_LRR_F 								{ quality = 6; price = 9000; sellPrice = 530; };
	class srifle_DMR_07_blk_F                       { quality = 2; price = 2700; sellPrice = 310; };
	class srifle_DMR_07_hex_F                       { quality = 2; price = 2700; sellPrice = 310; };
	class srifle_DMR_07_ghex_F                      { quality = 2; price = 2700; sellPrice = 310; };
	class srifle_LRR_tna_F                          { quality = 6; price = 9000; sellPrice = 530; };
	class srifle_GM6_ghex_F                         { quality = 6; price = 9500; sellPrice = 550; };
	class arifle_MXM_khk_F                          { quality = 2; price = 2350; sellPrice = 300; };
	class arifle_SPAR_03_blk_F                      { quality = 3; price = 3850; sellPrice = 385; };
	class arifle_SPAR_03_khk_F                      { quality = 3; price = 3850; sellPrice = 385; };
	class arifle_SPAR_03_snd_F                      { quality = 3; price = 3850; sellPrice = 385; };	

	///////////////////////////////////////////////////////////////////////////////
	// ArmA 2 Weapons
	///////////////////////////////////////////////////////////////////////////////		
	class Exile_Weapon_DMR							{ quality = 3; price = 3750; sellPrice = 375; };
	class Exile_Weapon_LeeEnfield					{ quality = 6; price = 9000; sellPrice = 300; };
	class Exile_Weapon_CZ550						{ quality = 6; price = 9000; sellPrice = 300; };
	class Exile_Weapon_SVD							{ quality = 6; price = 9000; sellPrice = 300; };
	class Exile_Weapon_SVDCamo						{ quality = 6; price = 9000; sellPrice = 300; };
	class Exile_Weapon_VSSVintorez					{ quality = 6; price = 9000; sellPrice = 300; };
	class Exile_Weapon_RPK							{ quality = 4; price = 4750; sellPrice = 250; };
	class Exile_Weapon_PK							{ quality = 4; price = 4750; sellPrice = 250; };
	class Exile_Weapon_PKP							{ quality = 4; price = 4750; sellPrice = 250; };
	class Exile_Weapon_Colt1911						{ quality = 1; price = 400; sellPrice = 40; };
	class Exile_Weapon_Makarov						{ quality = 1; price = 250; sellPrice = 25; };
	class Exile_Weapon_Taurus						{ quality = 1; price = 250; sellPrice = 25; };
	class Exile_Weapon_TaurusGold					{ quality = 1; price = 550; sellPrice = 45; };
	class Exile_Weapon_M1014						{ quality = 2; price = 1000; sellPrice = 75; };	

	///////////////////////////////////////////////////////////////////////////////
	// ArmA 2 Ammunition
	///////////////////////////////////////////////////////////////////////////////		
	class Exile_Magazine_30Rnd_762x39_AK				{ quality = 3; price = 150; sellPrice = 10; };
	class Exile_Magazine_30Rnd_545x39_AK				{ quality = 2; price = 150; sellPrice = 10; };
	class Exile_Magazine_30Rnd_545x39_AK_Green			{ quality = 2; price = 150; sellPrice = 10; };
	class Exile_Magazine_30Rnd_545x39_AK_Red			{ quality = 2; price = 150; sellPrice = 10; };
	class Exile_Magazine_30Rnd_545x39_AK_White			{ quality = 2; price = 150; sellPrice = 10; };
	class Exile_Magazine_30Rnd_545x39_AK_Yellow			{ quality = 2; price = 150; sellPrice = 10; };
	class Exile_Magazine_45Rnd_545x39_RPK_Green			{ quality = 2; price = 150; sellPrice = 10; };
	class Exile_Magazine_75Rnd_545x39_RPK_Green			{ quality = 2; price = 180; sellPrice = 10; };
	class Exile_Magazine_20Rnd_762x51_DMR				{ quality = 3; price = 140; sellPrice = 10; };
	class Exile_Magazine_20Rnd_762x51_DMR_Yellow		{ quality = 3; price = 140; sellPrice = 10; };
	class Exile_Magazine_20Rnd_762x51_DMR_Red			{ quality = 3; price = 140; sellPrice = 10; };
	class Exile_Magazine_20Rnd_762x51_DMR_Green			{ quality = 3; price = 140; sellPrice = 10; };
	class Exile_Magazine_20Rnd_762x51_DMR_White			{ quality = 3; price = 140; sellPrice = 10; };
	class Exile_Magazine_10Rnd_303						{ quality = 6; price = 300; sellPrice = 35; };
	class Exile_Magazine_100Rnd_762x54_PK_Green			{ quality = 4; price = 1100; sellPrice = 30; };
	class Exile_Magazine_7Rnd_45ACP						{ quality = 1; price = 40; sellPrice = 4; };
	class Exile_Magazine_8Rnd_9x18						{ quality = 1; price = 50; sellPrice = 5; };
	class Exile_Magazine_6Rnd_45ACP						{ quality = 1; price = 35; sellPrice = 4; };
	class Exile_Magazine_5Rnd_22LR						{ quality = 1; price = 240; sellPrice = 20; };
	class Exile_Magazine_10Rnd_762x54					{ quality = 3; price = 70; sellPrice = 7; };
	class Exile_Magazine_10Rnd_9x39						{ quality = 1; price = 40; sellPrice = 4; };
	class Exile_Magazine_20Rnd_9x39						{ quality = 1; price = 80; sellPrice = 8; };
	class Exile_Magazine_8Rnd_74Slug					{ quality = 1; price = 40; sellPrice = 8; };
	class Exile_Magazine_8Rnd_74Pellets					{ quality = 1; price = 20; }; // broken?
	
	///////////////////////////////////////////////////////////////////////////////
	// BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_OldBike 						{ quality = 1; price = 20; };
	class Exile_Bike_MountainBike 					{ quality = 1; price = 30; };

	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Black					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Blue					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Red					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_White					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Nato					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Csat					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Fia					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Guerilla01			{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Guerilla02			{ quality = 1; price = 2500; };

	///////////////////////////////////////////////////////////////////////////////
	// KARTS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_BluKing					{ quality = 1; price = 1100; };
	class Exile_Car_Kart_RedStone					{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Vrana						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Green						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Blue						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Orange						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_White						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Yellow						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Black						{ quality = 1; price = 1100; };

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_White				{ quality = 3; price = 18000; };
	class Exile_Boat_MotorBoat_Police				{ quality = 3; price = 18000; };
	class Exile_Boat_MotorBoat_Orange				{ quality = 3; price = 18000; };

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_CSAT				{ quality = 2; price = 4000; };
	class Exile_Boat_RubberDuck_Digital				{ quality = 2; price = 4000; };
	class Exile_Boat_RubberDuck_Orange				{ quality = 2; price = 4000; };
	class Exile_Boat_RubberDuck_Blue				{ quality = 2; price = 10000; };
	class Exile_Boat_RubberDuck_Black				{ quality = 2; price = 4000; };
	class O_Boat_Transport_01_F				        { quality = 2; price = 4000; };	

	///////////////////////////////////////////////////////////////////////////////
	// Boat Transport
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RHIB				            { quality = 2; price = 14000; };
	class I_C_Boat_Transport_02_F		            { quality = 2; price = 14000; };		
	
	///////////////////////////////////////////////////////////////////////////////
	// Jetski
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_WaterScooter                  { quality = 1; price = 5000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_CSAT						{ quality = 4; price = 7000; };
	class Exile_Boat_SDV_Digital					{ quality = 4; price = 7000; };
	class Exile_Boat_SDV_Grey						{ quality = 4; price = 25000; };
	class I_Boat_Armed_01_minigun_F					{ quality = 5; price = 150000; };	
	class B_Boat_Armed_01_minigun_F					{ quality = 5; price = 150000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Green				{ quality = 3; price = 27500; };
	class Exile_Chopper_Hellcat_FIA					{ quality = 3; price = 27500; };

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Green			{ quality = 2; price = 23000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Blue				{ quality = 1; price = 17000; sellPrice = 3800; };
	class Exile_Chopper_Hummingbird_Civillian_Red				{ quality = 1; price = 17000; sellPrice = 3800; };
	class Exile_Chopper_Hummingbird_Civillian_ION				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_BlueLine			{ quality = 1; price = 17000; sellPrice = 3800; };
	class Exile_Chopper_Hummingbird_Civillian_Digital			{ quality = 1; price = 17000; sellPrice = 3800; };
	class Exile_Chopper_Hummingbird_Civillian_Elliptical		{ quality = 1; price = 17000; sellPrice = 3800; };
	class Exile_Chopper_Hummingbird_Civillian_Furious			{ quality = 1; price = 17000; sellPrice = 3800; };
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher		{ quality = 1; price = 17000; sellPrice = 3800; };
	class Exile_Chopper_Hummingbird_Civillian_Jeans				{ quality = 1; price = 17000; sellPrice = 3800; };
	class Exile_Chopper_Hummingbird_Civillian_Light				{ quality = 1; price = 17000; sellPrice = 3800; };
	class Exile_Chopper_Hummingbird_Civillian_Shadow			{ quality = 1; price = 17000; sellPrice = 3800; };
	class Exile_Chopper_Hummingbird_Civillian_Sheriff			{ quality = 1; price = 17000; sellPrice = 3800; };
	class Exile_Chopper_Hummingbird_Civillian_Speedy			{ quality = 1; price = 17000; sellPrice = 3800; };
	class Exile_Chopper_Hummingbird_Civillian_Sunset			{ quality = 1; price = 17000; sellPrice = 3800; };
	class Exile_Chopper_Hummingbird_Civillian_Vrana				{ quality = 1; price = 17000; sellPrice = 3800; };
	class Exile_Chopper_Hummingbird_Civillian_Wasp				{ quality = 1; price = 17000; sellPrice = 3800; };
	class Exile_Chopper_Hummingbird_Civillian_Wave				{ quality = 1; price = 17000; sellPrice = 3800; };

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Black								{ quality = 5; price = 55000; };
	class Exile_Chopper_Huron_Green								{ quality = 5; price = 55000; };

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Green 					{ quality = 3; price = 25000; };
	class Exile_Chopper_Huey_Desert					{ quality = 3; price = 25000; };
	class Exile_Chopper_Huey_Armed_Green			{ quality = 6; price = 65000; };
	class Exile_Chopper_Huey_Armed_Desert			{ quality = 6; price = 65000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// BW Helis
	///////////////////////////////////////////////////////////////////////////////
	class O_Heli_Light_02_F								        { quality = 6; price = 80000; };
	class O_Heli_Light_02_v2_F							        { quality = 6; price = 80000; };
	class B_Heli_Transport_01_camo_F							{ quality = 6; price = 100000; };
	class B_Heli_Transport_01_F							        { quality = 6; price = 100000; };	
	class B_Heli_Transport_03_F								    { quality = 6; price = 120000; };
	class B_Heli_Transport_03_black_F							{ quality = 6; price = 120000; };	

	///////////////////////////////////////////////////////////////////////////////
	// MV-22 vehicle
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_BlackfishInfantry                         { quality = 5; price = 80000; };

	///////////////////////////////////////////////////////////////////////////////
	// MV-22 infantry
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_BlackfishVehicle                          { quality = 5; price = 75000; };
		
	///////////////////////////////////////////////////////////////////////////////
	// Mohawk
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Mohawk_FIA								{ quality = 5; price = 49000; };

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_CSAT								{ quality = 4; price = 28000; };
	class Exile_Chopper_Orca_Black								{ quality = 4; price = 28000; };
	class Exile_Chopper_Orca_BlackCustom						{ quality = 4; price = 28000; };

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_CSAT						{ quality = 4; price = 47000; };
	class Exile_Chopper_Taru_Transport_Black					{ quality = 4; price = 47000; };
	
	class Exile_Chopper_Taru_CSAT								{ quality = 4; price = 33000; };
	class Exile_Chopper_Taru_Black								{ quality = 4; price = 33000; };

	class Exile_Chopper_Taru_Covered_CSAT						{ quality = 4; price = 43000; };
	class Exile_Chopper_Taru_Covered_Black						{ quality = 4; price = 43000; };
	

	///////////////////////////////////////////////////////////////////////////////
	// Cessna
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_Cessna									{ quality = 1; price = 16500; };
	class GNT_C185F									            { quality = 1; price = 17500; };

	///////////////////////////////////////////////////////////////////////////////
	// Plane Civil
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_Ceasar									{ quality = 2; price = 20000; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// An-2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_AN2_Green									{ quality = 2; price = 18000; };
	class Exile_Plane_AN2_White									{ quality = 2; price = 18000; };
	class Exile_Plane_AN2_Stripe								{ quality = 2; price = 18000; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Beige						{ quality = 2; price = 12000; };
	class Exile_Car_Hatchback_Green						{ quality = 2; price = 12000; };
	class Exile_Car_Hatchback_Blue						{ quality = 2; price = 12000; };
	class Exile_Car_Hatchback_BlueCustom				{ quality = 2; price = 12000; };
	class Exile_Car_Hatchback_BeigeCustom				{ quality = 2; price = 12000; };
	class Exile_Car_Hatchback_Yellow					{ quality = 2; price = 12000; };
	class Exile_Car_Hatchback_Grey						{ quality = 2; price = 12000; };
	class Exile_Car_Hatchback_Black						{ quality = 2; price = 12000; };
	class Exile_Car_Hatchback_Dark						{ quality = 2; price = 12000; };
	class Exile_Car_Hatchback_Rusty1					{ quality = 2; price = 12000; sellPrice = 3000; };	
	class Exile_Car_Hatchback_Rusty2					{ quality = 2; price = 12000; sellPrice = 3000; }; 	
	class Exile_Car_Hatchback_Rusty3					{ quality = 2; price = 12000; sellPrice = 3000; }; 	

	///////////////////////////////////////////////////////////////////////////////
	// Golf
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Golf_Red							{ quality = 1; price = 8000; };
	class Exile_Car_Golf_Black							{ quality = 1; price = 8000; sellPrice = 2000; }; 	
	
	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Blue 				{ quality = 1; price = 27000; };
	class Exile_Car_Ikarus_Red 					{ quality = 1; price = 27000; sellPrice = 3000; };
	class Exile_Car_Ikarus_Party 				{ quality = 1; price = 27000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Blue			{ quality = 3; price = 38000; };
	class Exile_Car_Ural_Open_Yellow		{ quality = 3; price = 38000; };
	class Exile_Car_Ural_Open_Worker		{ quality = 3; price = 38000; };
	class Exile_Car_Ural_Open_Military		{ quality = 3; price = 38000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Blue			{ quality = 3; price = 40000; };
	class Exile_Car_Ural_Covered_Yellow			{ quality = 3; price = 40000; };
	class Exile_Car_Ural_Covered_Worker			{ quality = 3; price = 40000; };
	class Exile_Car_Ural_Covered_Military		{ quality = 3; price = 40000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// V3S
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_V3S_Open			{ quality = 3; price = 38500; };
	class Exile_Car_V3S_Covered			{ quality = 3; price = 38500; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// SUVXL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Black 				{ quality = 3; price = 20000; };

	///////////////////////////////////////////////////////////////////////////////
	// Tractor
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tractor_Red 				{ quality = 1; price = 2800; sellPrice = 1000; }; 

	///////////////////////////////////////////////////////////////////////////////
	// Tractor (Old)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_OldTractor_Red 				{ quality = 1; price = 2650; sellPrice = 600; }; 

	///////////////////////////////////////////////////////////////////////////////
	// Tow Tractor
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_TowTractor_White			{ quality = 1; price = 2200; sellPrice = 550; };

	///////////////////////////////////////////////////////////////////////////////
	// Octavius
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Octavius_White				{ quality = 2; price = 6000; };
	class Exile_Car_Octavius_Black				{ quality = 2; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// UAZ
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_UAZ_Green				{ quality = 2; price = 7000; };

	///////////////////////////////////////////////////////////////////////////////
	// UAZ (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_UAZ_Open_Green			{ quality = 2; price = 7500; };

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Red 				{ quality = 3; price = 12000; };
	class Exile_Car_LandRover_Urban 			{ quality = 3; price = 12000; };
	class Exile_Car_LandRover_Green 			{ quality = 3; price = 12000; };
	class Exile_Car_LandRover_Sand 				{ quality = 3; price = 12000; };
	class Exile_Car_LandRover_Desert 			{ quality = 3; price = 12000; sellPrice = 2500; };

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover (Ambulance)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Ambulance_Green		{ quality = 3; price = 16000; };
	class Exile_Car_LandRover_Ambulance_Desert		{ quality = 3; price = 16000; sellPrice = 3000; };
	class Exile_Car_LandRover_Ambulance_Sand		{ quality = 3; price = 16000; };

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Green 				{ quality = 1; price = 6000; };
	class Exile_Car_Lada_Taxi 				{ quality = 1; price = 6000; };
	class Exile_Car_Lada_Red 				{ quality = 1; price = 6000; };
	class Exile_Car_Lada_White 				{ quality = 1; price = 6000; };
	class Exile_Car_Lada_Hipster 			{ quality = 1; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Blue				{ quality = 1; price = 6000; };
	class Exile_Car_Volha_White				{ quality = 1; price = 6000; };
	class Exile_Car_Volha_Black				{ quality = 1; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Red					{ quality = 2; price = 14000; };
	class Exile_Car_Hatchback_Sport_Blue				{ quality = 2; price = 14000; };
	class Exile_Car_Hatchback_Sport_Orange				{ quality = 2; price = 14000; };
	class Exile_Car_Hatchback_Sport_White				{ quality = 2; price = 14000; };
	class Exile_Car_Hatchback_Sport_Beige				{ quality = 2; price = 14000; };
	class Exile_Car_Hatchback_Sport_Green				{ quality = 2; price = 14000; };

	///////////////////////////////////////////////////////////////////////////////
	// HEMMT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HEMMT 								{ quality = 4; price = 48000; };
	class B_Truck_01_covered_F 							{ quality = 4; price = 42000; };	
	class B_Truck_01_medical_F 						    { quality = 4; price = 46000; };
	class B_Truck_01_fuel_F 							{ quality = 4; price = 45000; };
	class B_Truck_01_box_F 							    { quality = 4; price = 44000; };	
	class B_Truck_01_Repair_F 							{ quality = 4; price = 43000; };
	class B_Truck_01_mover_F 							{ quality = 4; price = 41000; };	

	///////////////////////////////////////////////////////////////////////////////
	// Hunter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter 								{ quality = 5; price = 56500; };

	///////////////////////////////////////////////////////////////////////////////
	// Ifrit
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit 								{ quality = 5; price = 43000; };

	///////////////////////////////////////////////////////////////////////////////
	// Prowler
	///////////////////////////////////////////////////////////////////////////////	
	class Exile_Car_ProwlerUnarmed                      {quality = 5; price = 36000; };	

	///////////////////////////////////////////////////////////////////////////////
	// Prowler light
	///////////////////////////////////////////////////////////////////////////////	
	class Exile_Car_ProwlerLight                         {quality = 4; price = 34500; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Prowler
	///////////////////////////////////////////////////////////////////////////////	
	class O_T_LSV_02_armed_arid_F                        {quality = 6; price = 100000; };
	class O_T_LSV_02_armed_ghex_F                        {quality = 6; price = 100000; };
	class O_T_LSV_02_armed_black_F                        {quality = 6; price = 100000; };	
		
	///////////////////////////////////////////////////////////////////////////////
	// Qilin
	///////////////////////////////////////////////////////////////////////////////	
	class Exile_Car_QilinUnarmed                        {quality = 4; price = 32000; };

	///////////////////////////////////////////////////////////////////////////////
	// Qilin armed
	///////////////////////////////////////////////////////////////////////////////	
	class B_LSV_01_armed_F                              {quality = 6; price = 200000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Red							{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Beige						{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_White						{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Blue						{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_DarkRed						{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_BlueCustom					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla01					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla02					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla03					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla04					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla05					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla06					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla07					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla08					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla09					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla10					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla11					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla12					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Rusty1						{ quality = 3; price = 16000; sellPrice = 3000; };
	class Exile_Car_Offroad_Rusty2						{ quality = 3; price = 16000; sellPrice = 3000; };
	class Exile_Car_Offroad_Rusty3						{ quality = 3; price = 16000; sellPrice = 3000; };	

	///////////////////////////////////////////////////////////////////////////////
	// MB 4WD
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_MB4WD							    { quality = 2; price = 24500; };
	class Exile_Car_MB4WDOpen							{ quality = 2; price = 23000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class B_GEN_Offroad_01_gen_F						{ quality = 3; price = 22000; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Guerilla01 			{ quality = 6; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla02 			{ quality = 6; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla03 			{ quality = 6; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla04 			{ quality = 6; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla05 			{ quality = 6; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla06 			{ quality = 6; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla07 			{ quality = 6; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla08 			{ quality = 6; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla09 			{ quality = 6; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla10 			{ quality = 6; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla11 			{ quality = 6; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla12 			{ quality = 6; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Civillian 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Red 					{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Beige 				{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_White 				{ quality = 4  price = 12500; };
	class Exile_Car_Offroad_Repair_Blue 				{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_DarkRed 				{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_BlueCustom 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla01 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla02 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla03 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla04 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla05 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla06 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla07 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla08 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla09 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla10 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla11 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla12 			{ quality = 4; price = 12500; };

	///////////////////////////////////////////////////////////////////////////////
	// Strider
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Strider 							{ quality = 6; price = 94000; };
	class I_MRAP_03_F 							        { quality = 6; price = 94000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Red 							{ quality = 3; price = 14000; };
	class Exile_Car_SUV_Black 							{ quality = 3; price = 14000; };
	class Exile_Car_SUV_Grey 							{ quality = 3; price = 14000; };
	class Exile_Car_SUV_Orange 							{ quality = 3; price = 14000; };
	class Exile_Car_SUV_Rusty1 							{ quality = 3; price = 14000; sellPrice = 3000; };
	class Exile_Car_SUV_Rusty2 							{ quality = 3; price = 14000; sellPrice = 3000; };
	class Exile_Car_SUV_Rusty3 							{ quality = 3; price = 14000; sellPrice = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUV (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Armed_Black 					{ quality = 6; price = 45000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// BRDM2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BRDM2_HQ 							{ quality = 6; price = 45000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// BTR40
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BTR40_MG_Green 							{ quality = 6; price = 48000; };
	class Exile_Car_BTR40_MG_Camo 							{ quality = 6; price = 48000; };
	class Exile_Car_BTR40_Green 							{ quality = 3; price = 15000; };
	class Exile_Car_BTR40_Camo 								{ quality = 3; price = 15000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// HMMWV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HMMWV_M134_Green 							{ quality = 6; price = 43000; };
	class Exile_Car_HMMWV_M134_Desert 							{ quality = 6; price = 43000; };
	class Exile_Car_HMMWV_M2_Green 								{ quality = 6; price = 50000; };
	class Exile_Car_HMMWV_M2_Desert 							{ quality = 6; price = 50000; };
	class Exile_Car_HMMWV_MEV_Green 							{ quality = 3; price = 31000; };
	class Exile_Car_HMMWV_MEV_Desert 							{ quality = 3; price = 31000; };
	class Exile_Car_HMMWV_UNA_Green 							{ quality = 3; price = 31000; };
	class Exile_Car_HMMWV_UNA_Desert 							{ quality = 3; price = 31000; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest 							{ quality = 4; price = 48300; };
	class O_Truck_03_covered_F 							{ quality = 4; price = 42000; };
	class O_Truck_03_medical_F 							{ quality = 4; price = 46300; };
	class O_Truck_03_repair_F 							{ quality = 4; price = 43300; };
	class O_Truck_03_fuel_F 							{ quality = 4; price = 45300; };

	///////////////////////////////////////////////////////////////////////////////
	// Van 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Black 							{ quality = 3; price = 25000; };
	class Exile_Car_Van_White 							{ quality = 3; price = 25000; };
	class Exile_Car_Van_Red 							{ quality = 3; price = 25000; };
	class Exile_Car_Van_Guerilla01 						{ quality = 3; price = 25000; };
	class Exile_Car_Van_Guerilla02 						{ quality = 3; price = 25000; };
	class Exile_Car_Van_Guerilla03 						{ quality = 3; price = 25000; };
	class Exile_Car_Van_Guerilla04 						{ quality = 3; price = 25000; };
	class Exile_Car_Van_Guerilla05 						{ quality = 3; price = 25000; };
	class Exile_Car_Van_Guerilla06 						{ quality = 3; price = 25000; };
	class Exile_Car_Van_Guerilla07 						{ quality = 3; price = 25000; };
	class Exile_Car_Van_Guerilla08 						{ quality = 3; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Black 						{ quality = 3; price = 27000; };
	class Exile_Car_Van_Box_White 						{ quality = 3; price = 27000; };
	class Exile_Car_Van_Box_Red 						{ quality = 3; price = 27000; };
	class Exile_Car_Van_Box_Guerilla01 					{ quality = 3; price = 27000; };
	class Exile_Car_Van_Box_Guerilla02 					{ quality = 3; price = 27000; };
	class Exile_Car_Van_Box_Guerilla03 					{ quality = 3; price = 27000; };
	class Exile_Car_Van_Box_Guerilla04 					{ quality = 3; price = 27000; };
	class Exile_Car_Van_Box_Guerilla05 					{ quality = 3; price = 27000; };
	class Exile_Car_Van_Box_Guerilla06 					{ quality = 3; price = 27000; };
	class Exile_Car_Van_Box_Guerilla07 					{ quality = 3; price = 27000; };
	class Exile_Car_Van_Box_Guerilla08 					{ quality = 3; price = 27000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Black 						{ quality = 2; price = 15000; };
	class Exile_Car_Van_Fuel_White 						{ quality = 2; price = 15000; };
	class Exile_Car_Van_Fuel_Red 						{ quality = 2; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla01 				{ quality = 2; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla02 				{ quality = 2; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla03 				{ quality = 2; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// Zamak
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Zamak 								{ quality = 4; price = 43000; };
	class I_Truck_02_transport_F 						{ quality = 4; price = 43000; };	
	class O_Truck_02_medical_F 							{ quality = 4; price = 41000; };
	class I_Truck_02_medical_F 							{ quality = 4; price = 41000; };
	class I_Truck_02_fuel_F 							{ quality = 4; price = 40000; };
	class O_Truck_02_fuel_F 							{ quality = 4; price = 40000; };
	class C_Truck_02_fuel_F 							{ quality = 4; price = 40000; };	
	class O_Truck_02_box_F 								{ quality = 4; price = 38000; };	
	class I_Truck_02_box_F 							    { quality = 4; price = 38000; };
	class C_Truck_02_box_F 							    { quality = 4; price = 38000; };	
	class O_Truck_02_transport_F 					    { quality = 4; price = 43000; };
	class C_Truck_02_transport_F 					    { quality = 4; price = 43000; };	
	class I_Truck_02_covered_F 					        { quality = 4; price = 37000; };
	class C_Truck_02_covered_F 					        { quality = 4; price = 37000; };	
	class O_Truck_02_covered_F 					        { quality = 4; price = 37000; };

	///////////////////////////////////////////////////////////////////////////////
	// Flags
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_FlagStolen1						{ quality = 1; price = 5000;  sellPrice = 5000;  };
	class Exile_Item_FlagStolen2						{ quality = 1; price = 10000; sellPrice = 10000; };
	class Exile_Item_FlagStolen3						{ quality = 1; price = 15000; sellPrice = 15000; };
	class Exile_Item_FlagStolen4						{ quality = 1; price = 20000; sellPrice = 20000; };
	class Exile_Item_FlagStolen5						{ quality = 1; price = 25000; sellPrice = 25000; };
	class Exile_Item_FlagStolen6						{ quality = 1; price = 30000; sellPrice = 30000; };
	class Exile_Item_FlagStolen7						{ quality = 1; price = 35000; sellPrice = 35000; };
	class Exile_Item_FlagStolen8						{ quality = 1; price = 40000; sellPrice = 40000; };
	class Exile_Item_FlagStolen9						{ quality = 1; price = 45000; sellPrice = 45000; };
	class Exile_Item_FlagStolen10						{ quality = 1; price = 50000; sellPrice = 50000; };
	
};

class CfgExileCustomCode  
{
   ExileClient_object_player_event_onHandleDamage = "custom\AntiPVP\ExileClient_object_player_event_onHandleDamage.sqf";   
   //ExileClient_object_player_death_startBleedingOut = "custom\EnigmaRevive\ExileClient_object_player_death_startBleedingOut.sqf";
   ExileClient_gui_xm8_slide_apps_onOpen = "overrides\ExileClient_gui_xm8_slide_apps_onOpen.sqf";   
   //ExileClient_object_player_event_onInventoryOpened = "custom\EnigmaRevive\ExileClient_object_player_event_onInventoryOpened.sqf";  
   ExileClient_gui_xm8_slide = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_slide.sqf";
   ExileClient_gui_xm8_show = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_show.sqf";
   ExileClient_construction_handleAbort = "custom\base\ExileClient_construction_handleAbort.sqf";
   ExileClient_object_item_construct = "custom\base\ExileClient_object_item_construct.sqf";
   ExileClient_construction_thread = "custom\base\ExileClient_construction_thread.sqf";   
   /*  
   ExileServer_object_player_createBambi = "custom\ExileServer_object_player_createBambi.sqf";    
   ExileServer_world_spawnVehicles = "custom\spawnVehicles\ExileServer_world_spawnVehicles.sqf";   
   ExileServer_object_vehicle_carefulCreateVehicle = "custom\vehiclesweapons\ExileServer_object_vehicle_carefulCreateVehicle.sqf";
   */ 
};
class CfgExileEnvironment
{
	class Altis 
	{
		class FireFlies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour fire flies begin to spawn
			startHour = 18;

			// At this hour fire flies stop spawning
			endHour = 4;
		};

		class Anomalies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour anomalies begin to spawn
			startHour = 19;

			// At this hour anomalies stop spawning
			endHour = 6;
		};

		class Breathing
		{
			// 1 = enabled, 0 = disabled
			enable = 0;
		};

		class Snow
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// https://community.bistudio.com/wiki/surfaceType
			surfaces[] = {};
		};

		class Radiation 
		{
			// 1 = enabled, 0 = disabled
			enable = 1;
		};

		class Temperature
		{
			// Temperature in °C for the time of day, per hour
			// Add the first index to the last index, so it is 25 indizes!
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		
			// Temperature change in °C when it is 100% overcast
			overcast = -2;

			// Temperature change in °C when it is 100% raining
			rain = -5;

			// Temperature change in °C when it is 100% windy
			wind = -1;

			// Temperature change per 100m altitude in °C
			altitude = -0.5;

			// Difference from the daytime temperature to the water temperature
			water = -5;
		};
	};

	class Namalsk: Altis 
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 1;
		};

		class Breathing: Breathing
		{
			enable = 1;
		};

		class Snow: Snow
		{
			enable = 1;
			surfaces[] = {"#nam_snow"};
		};

		class Radiation: Radiation
		{
			enable = 1;
			contaminatedZones[] = 
			{
				{{3960.14,	8454.75,	152.862}, 	80, 	140},	// Object A1
				{{4974.70,	6632.82,	4.74293}, 	40, 	150},	// Object A2
				{{6487.92,	9302.03,	36.0014}, 	60, 	110}	// Sebjan Chemical Factory
			};
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {-2.00,-1.77,-1.12,-0.10,1.24,2.78,4.40,6.00,7.46,8.65,9.50,9.90,9.90,9.50,8.65,7.46,6.00,4.40,2.78,1.24,-0.10,-1.12,-1.77,-2.00,-2.00};
		};
	};

	class Tanoa: Altis
	{
		class FireFlies
		{
			// 1 = enabled, 0 = disabled
			enable = 1;

			// At this hour fire flies begin to spawn
			startHour = 17;

			// At this hour fire flies stop spawning
			endHour = 5;
		};

		class Anomalies
		{
			// 1 = enabled, 0 = disabled
			enable = 1;

			// At this hour anomalies begin to spawn
			startHour = 11;

			// At this hour anomalies stop spawning
			endHour = 5;
		};

		class Breathing: Breathing
		{
			enable = 0;
		};

		class Snow: Snow
		{
			enable = 0;
		};

		class Radiation 
		{
			enable = 1;
		};

		class Temperature
		{
			// Temperature in °C for the time of day, per hour
			// Add the first index to the last index, so it is 25 indizes!
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		
			// Temperature change in °C when it is 100% overcast
			overcast = -2;

			// Temperature change in °C when it is 100% raining
			rain = -5;

			// Temperature change in °C when it is 100% windy
			wind = -1;

			// Temperature change per 100m altitude in °C
			altitude = -0.5;

			// Difference from the daytime temperature to the water temperature
			water = -10;
		};
	};
};
class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
				
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
				
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileLootSettings
{
	/**
	 * Lifetime of loot in minutes. Synchronize this with
	 * the garbage collector settings of your server
	 * CfgSettings!
	 */
	lifeTime = 8;

	/**
	 * Interval in seconds when the client searches for
	 * new buildings to spawn loot in
	 */
	spawnInterval = 30;

	/**
	 * This is a percentage value to determine how many loot
	 * positions should contain loot when the system spawns loot.
	 *
	 * If a building has 20 positions defined, Exile will 
	 * spawn loot in 10 random positions of them.
	 * 
	 * This means smaller buildings spawn less loot and larger
	 * ones spawn more loot.
	 *
	 * You can also cap it at a maximum value. See below.
	 */
	maximumPositionCoverage = 30;

 	/**
 	 * Limit the number of loot positions per building. If the 
 	 * above percentage value exceeds this value, it will be capped.
 	 *
 	 * Example: Coverage is 50%. Building has 60 loot positions defined.
 	 * This results in 30 loot positions and that is too much. So we
 	 * cap this at 10
 	 */
	maximumNumberOfLootSpotsPerBuilding = 6;

	/**
	 * Exile spawns a random number of items per loot spot. This 
	 * is the upper cap for that. So 3 means it could spawn 1, 2 
	 * or 3.
	 */
	maximumNumberOfItemsPerLootSpot = 3;

	/**
	 * Radius in meter to spawn loot AROUND each player.
	 * Do NOT touch this value if you dont know what you do.
	 * The higher the number, the higher the drop rates, the
	 * easier your server will lag.
	 *
	 * 50m  = Minimum
	 * 200m = Maximum
	 */
	spawnRadius = 60;

	/**
	 * Defines the radius around trader cities where the system should
	 * not spawn loot. Set this to 0 if you want to have loot spawning
	 * in trader citites, ugh.
	 */
	minimumDistanceToTraderZones = 500;

	/**
	 * Defines the radius around territories where no loot spawns.
	 * This does not regard the actual size of a territory. So do not
	 * set this to a lower value than the maximum radius of a territory,
	 * which is 150m by default.
	 */
	minimumDistanceToTerritories = 0;
};
class CfgExileMobileXM8
{
	/**
	 * Add the 4 digit permission code here, so players can authorize
	 * your server to send them messages to their Mobile XM8 app.
	 */
	code = "EJBO";
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgExileParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgExileRussianRoulette
{
	/*
		Minimum amount to join a session of 
		russian roulette
	*/
	buyInAmount = 500;
};
class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uids[] = {};
	};
};

class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};

/**
 * Sort this by probability of occurence to speed things up a bit
 */
class CfgInteractionMenus
{
	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
            /*			
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};
            */
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Fermer";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Ouvrir";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle
            class Repair: ExileAbstractAction
            {
               title = "Reparation complete";
               condition = "true";
               action = "_this call JohnO_fnc_vehicleRepairCar";
            };
            class RepairWheels: ExileAbstractAction
            {
               title = "Reparation des Roues";
               condition = "call ExileClient_object_vehicle_interaction_show";
               action = "_this call JohnO_fnc_repairWheels";
            };

			// Hot-wires a vehicle
            /*			
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
            */
			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Ravitailler en carburant";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Vide le carburant";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};

	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
            /*			
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};
            */
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Fermer";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Ouvrir";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
            /*			
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
            */
			// Repairs a vehicle
            class RepairMajor: ExileAbstractAction
            {
               title = "Reparation complete";
               condition = "true";
               action = "_this call JohnO_fnc_repairchopper";
            };
            class RepairMinor: ExileAbstractAction
            {
               title = "Reparation mineure";
               condition = "true";
               action = "_this call JohnO_fnc_repairchopperhalf";
            };

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Ravitailler en carburant";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Vide le carburant";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			class RotateLeft: ExileAbstractAction
			{
				title = "Rotate Left";	
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "Rotate Right";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
		};
	};

	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Safe";

		class Actions 
		{
            /*			
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};
            */
			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Fermer";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Ouvrir";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Pack : ExileAbstractAction
			{
				title = "Pack";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
		};
	};

	class Laptop
	{
		targetType = 2;
		target = "Exile_Construction_Laptop_Static";

		class Actions
		{
			class CameraSystem: ExileAbstractAction
			{
				title = "CCTV Access";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call ExileClient_gui_baseCamera_show";
			};
		};
	};

	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";

		class Actions
		{
			class Mount: ExileAbstractAction
			{
				title = "Monter";
				condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_mount";
			};

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
			};

			class Unmount: ExileAbstractAction
			{
				title = "demontez";
				condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_unmount";
			};
		};
	};

	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";

		class Actions 
		{
            /*			
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};
            */
			class Unlock : ExileAbstractAction
			{
				title = "Ouvrir";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Lock : ExileAbstractAction
			{
				title = "Fermer";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Picks up the construction so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_move";
			};

			// Removes the construction.
			class Deconstruct: ExileAbstractAction
			{
				title = "Remove";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_deconstruct";
			};

			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};

			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "call ExileClient_object_construction_upgradeShow";
				action = "_this call ExileClient_object_construction_upgrade";
			};

			class MakeBoom : ExileAbstractAction
			{
				title = "Plant charge";
				condition = "call ExileClient_system_breaching_condition";
				action = "_this call ExileClient_system_breaching_action";
			};

			class Repair : ExileAbstractAction
			{
				title = "Repair";
				condition = "(!((ExileClientInteractionObject getVariable ['ExileConstructionDamage',0]) isEqualTo 0)) && (call ExileClient_util_world_isInOwnTerritory)";
				action = "_this call ExileClient_object_construction_repair";
			};

		};
	};

	/*
		Tent, Storage crate etc.
	*/
	class Container
	{
		targetType = 2;
		target = "Exile_Container_Abstract";

		class Actions 
		{
			class Pack 
			{
				title = "Pack";
				condition = "!((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Container_SupplyBox')";
				action = "_this spawn ExileClient_object_container_pack";
			};
			// Picks up the container so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "(getNumber(configFile >> 'CfgVehicles' >> typeOf ExileClientInteractionObject >> 'exileIsLockable') isEqualTo 0) || ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_construction_move";
			};
		};
	};

	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";

		class Actions
		{
			/*
			class Manage : ExileAbstractAction
			{
				title = "Manage";
				condition = "true";
				action = "_this call ExileClient_gui_baseManagement_event_show";
			};
			*/
            /*			
			class StealFlag: ExileAbstractAction
			{
				title = "Steal Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',1]) isEqualTo 0)";
				action = "['StealFlag', _this select 0] call ExileClient_action_execute";
			};
            */			
			class RestoreFlag: ExileAbstractAction
			{
				title = "Restore Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',0]) isEqualTo 1)";
				action = "['restoreFlagRequest', [netID ExileClientInteractionObject]] call ExileClient_system_network_send";
			};			
		};
	};

	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Fermer";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Ouvrir";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};
            /*
			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
            */
			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			// Pushes a boat into look direction to move into water
			class Push: ExileAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
		};
	};

	class Bikes
	{
		targetType = 2;
		target = "Bicycle";

		class Actions
		{
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call ExileClient_object_vehicle_flip";
			};
		};
	};

	class Player 
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{
			class Free: ExileAbstractAction
			{
				title = "Free";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
			};
			
			class Search: ExileAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
			};

			class Identify: ExileAbstractAction
			{
				title = "Identify Body";
				condition = "!(alive ExileClientInteractionObject)";
				action = "_this call ExileClient_object_player_identifyBody";
			};
            /*
			class Revive: ExileAbstractAction
			{
				title = "Revive Player";
				condition = "(!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['EnigmaRevivePermitted', true]) && (magazines player find 'Exile_Item_Defibrillator' >= 0))";
				action = "_this spawn Enigma_RevivePlyr";
			};			
			*/
			class HideCorpse: ExileAbstractAction
			{
				title = "Hide Body";
				condition = "!(alive ExileClientInteractionObject) && ('Exile_Melee_Shovel' isEqualTo (currentWeapon player))";
				action = "['HideBody', (_this select 0)] call ExileClient_action_execute";
			};
		};
	};
};
/**
 * Classname is used for reference
 * name is displayed in crafting requirements
 * models is used for crafting and interaction menus
 */
class CfgInteractionModels
{
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"Land_BarrelWater_F", //			
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f",

			// Namalsk
			"wellpump",
			"Land_jhad_stand_water",
			"Land_Jbad_Misc_Well_L",
			"Land_jbad_Fridge",
			"Land_jbad_reservoir",
			"Land_jbad_teapot",
			"Land_KBud",
			
			//Tanoa
			"watertank_01_f.p3d",
			"watertank_02_f.p3d",
			"watertank_03_f.p3d",
			"watertank_04_f.p3d",
			"watertower_01_f.p3d",			
			"Land_WaterTank_01_F",
			"Land_WaterTank_02_F",
			"Land_WaterTank_03_F",
			"Land_WaterTank_04_F",
			"Land_WaterTower_01_F",			
			"watertower_01_f",			
			"watertank_01_f",
			"watertank_02_f",
			"watertank_03_f",
			"watertank_04_f"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d",
			"shed_03_f.p3d",
			"Land_Shed_03_F",			
			"Land_WorkStand_F"  //
		};
	};

	class ShippingContainerSource
	{
		name = "Shipping Containers";
		models[] = 
		{
			// Arma 3
			"CargoBox_V1_F",
			"Cargo20_blue_F",
			"Cargo20_brick_red_F",
			"Cargo20_cyan_F",
			"Cargo20_grey_F",
			"Cargo20_light_blue_F",
			"Cargo20_light_green_F",
			"Cargo20_military_green_F",
			"Cargo20_military_ruins_F",
			"Cargo20_orange_F",
			"Cargo20_red_F",
			"Cargo20_sand_F",
			"Cargo20_white_F",
			"Cargo20_yellow_F",
			"Cargo40_blue_F",
			"Cargo40_brick_red_F",
			"Cargo40_cyan_F",
			"Cargo40_grey_F",
			"Cargo40_light_blue_F",
			"Cargo40_light_green_F",
			"Cargo40_military_green_F",
			"Cargo40_orange_F",
			"Cargo40_red_F",
			"Cargo40_sand_F",
			"Cargo40_white_F",
			"Cargo40_yellow_F",
            "Cargo10_brick_red_F",
            "Cargo10_white_F",
            "Cargo20_vr_F",
            "Cargo10_sand_F",
            "Cargo10_red_F",
            "Cargo10_orange_F",
            "Cargo10_military_green_F",
            "Cargo10_light_green_F",
            "Cargo10_light_blue_F",
            "Cargo10_grey_F",
            "Cargo10_light_green_F",
            "Cargo10_yellow_F",
            "Cargo10_cyan_F",
            "Cargo10_blue_F",
			//...
            "cargobox_v1_f.p3d",			
            "cargo20_military_green_f.p3d",
            "cargo20_white_f.p3d",
            "cargo20_sand_f.p3d",
            "cargo20_red_f.p3d",
            "cargo20_orange_f.p3d",
            "cargo20_military_green_f.p3d",
            "cargo20_brick_red_f.p3d",
            "cargo20_light_green_f.p3d",
            "cargo20_light_blue_f.p3d",
            "cargo20_grey_f.p3d",
            "cargo20_yellow_f.p3d",
            "cargo20_cyan_f.p3d",
            "cargo20_blue_f.p3d",
            "cargo40_brick_red_f.p3d",
            "cargo40_white_f.p3d",
            "cargo40_sand_f.p3d",
            "cargo40_red_f.p3d",
            "cargo40_orange_f.p3d",
            "cargo40_military_green_f.p3d",
            "cargo40_light_green_f.p3d",
            "cargo40_light_blue_f.p3d",
            "cargo40_grey_f.p3d",
            "cargo40_yellow_f.p3d",
            "cargo40_cyan_f.p3d",
            "cargo40_blue_f.p3d",
            "cargo10_brick_red_f.p3d",
            "cargo10_white_f.p3d",
            "cargo20_vr_f.p3d",
            "cargo10_sand_f.p3d",
            "cargo10_red_f.p3d",
            "cargo10_orange_f.p3d",
            "cargo10_military_green_f.p3d",
            "cargo10_light_green_f.p3d",
            "cargo10_light_blue_f.p3d",
            "cargo10_grey_f.p3d",
            "cargo10_light_green_f.p3d",
            "cargo10_yellow_f.p3d",
            "cargo10_cyan_f.p3d",
            "cargo10_blue_f.p3d",
			
			// Namalsk
			"nam_container.p3d",
			"misc_cargo1d.p3d",
			"misc_cargo1b.p3d",
			"misc_cargo1bo.p3d",
			"misc_cargo2c.p3d",
			"misc_cargo1ao.p3d",
			
			//Tanoa
			"ContainerLine_01_F",
			"ContainerLine_02_F",
			"ContainerLine_03_F",
			"containerline_03_f.p3d",
            "containerline_02_f.p3d",
            "containerline_01_f.p3d",

			"Land_ContainerLine_01_F",
			"Land_ContainerLine_02_F",
			"Land_ContainerLine_03_F",			
			"Land_CargoBox_V1_F",
			"Land_Cargo20_blue_F",
			"Land_Cargo20_brick_red_F",
			"Land_Cargo20_cyan_F",
			"Land_Cargo20_grey_F",
			"Land_Cargo20_light_blue_F",
			"Land_Cargo20_light_green_F",
			"Land_Cargo20_military_green_F",
			"Land_Cargo20_military_ruins_F",
			"Land_Cargo20_orange_F",
			"Land_Cargo20_red_F",
			"Land_Cargo20_sand_F",
			"Land_Cargo20_white_F",
			"Land_Cargo20_yellow_F",
			"Land_Cargo40_blue_F",
			"Land_Cargo40_brick_red_F",
			"Land_Cargo40_cyan_F",
			"Land_Cargo40_grey_F",
			"Land_Cargo40_light_blue_F",
			"Land_Cargo40_light_green_F",
			"Land_Cargo40_military_green_F",
			"Land_Cargo40_orange_F",
			"Land_Cargo40_red_F",
			"Land_Cargo40_sand_F",
			"Land_Cargo40_white_F",
			"Land_Cargo40_yellow_F",
            "Land_Cargo10_brick_red_F",
            "Land_Cargo10_white_F",
            "Land_Cargo20_vr_F",
            "Land_Cargo10_sand_F",
            "Land_Cargo10_red_F",
            "Land_Cargo10_orange_F",
            "Land_Cargo10_military_green_F",
            "Land_Cargo10_light_green_F",
            "Land_Cargo10_light_blue_F",
            "Land_Cargo10_grey_F",
            "Land_Cargo10_light_green_F",
            "Land_Cargo10_yellow_F",
            "Land_Cargo10_cyan_F",
            "Land_Cargo10_blue_F",			
			// Also allow wrecks
			"wreck_"
/*			
			"wreck_bmp2_f.p3d",
			"wreck_brdm2_f.p3d",
			"wreck_car2_f.p3d",
			"wreck_car3_f.p3d",
			"wreck_car_f.p3d",
			"wreck_cardismantled_f.p3d",
			"wreck_hmmwv_f.p3d",
			"wreck_hunter_f.p3d",
			"wreck_offroad2_f.p3d",
			"wreck_offroad_f.p3d",
			"wreck_skodovka_f.p3d",
			"wreck_slammer_f.p3d",
			"wreck_slammer_hull_f.p3d",
			"wreck_slammer_turret_f.p3d",
			"wreck_t72_hull_f.p3d",
			"wreck_t72_turret_f.p3d",
			"wreck_truck_dropside_f.p3d",
			"wreck_truck_f.p3d",
			"wreck_uaz_f.p3d",
			"wreck_ural_f.p3d"
			"wreck_van_f.p3d",
			*/


			// TODO: Ask community for CUP/AiA model names	
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",

			// A2 trees
            " str_",
            " Smrk_",
            " les_",
            " brg_"			
		};
	};

	// TODO: Add https://community.bistudio.com/wikidata/images/thumb/6/60/Arma3_CfgVehicles_Land_Tank_rust_F.jpg/150px-Arma3_CfgVehicles_Land_Tank_rust_F.jpg
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			//"fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"Land_MetalBarrel_F",
			//"flexibletank_01_f.p3d"
			//"fs_feed_f.p3d",
			//Tanoa
			//"Land_FuelStation_02_pump_F
			//"Land_FuelStation_01_pump_F
			//"fuelstation_01_pump_f.p3d",
			//"fuelstation_02_pump_f.p3d"
		};	
	};
};
class CfgLocker 
{
	numbersOnly = "0123456789";
	
	maxDeposit = 9999999;
};

class CfgPlayer 
{
	// In minutes ammount of time it takes to go from 100 - 0 if stationary
	hungerDecay = 90;
	thirstDecay = 60;

	// Damage taken from 0 (health||thirst)/sec
	healthDecay = 5.0;

	// Health regen if over BOTH
	thirstRegen = 90;
	hungerRegen = 90;

	// IF above meet recover HP%/MIN
	recoveryPerMinute = 2;

	// Set custom aim precision coefficient for weapon sway
	// https://community.bistudio.com/wiki/Arma_3_Stamina
	// Set to -1 if you want to use Arma 3 default value
	// setCustomAimCoef
	customAimCoefficient = 0.5;

	// 0 or 1
	enableFatigue = 0;
	enableStamina = 0;

	disableMapDrawing = 1;
};
class CfgSlothMachine
{
	spinCost = 100;
	Jackpot = 11111;
	
	chances[] = 
	{
		{85, ""}, 					// 85% = Nothing
		{95, "Level1"}, 			// 10% = 1pt
		{96, "Level2"}, 			// 1% = 10pt
		{97, "Level3"}, 			// 1% = 25pt
		{98, "Level4"}, 			// 1% = 50pt
		{99, "Level5"},				// 1% = 100pt
		{100, "Jackpot"} 			// 1% = Jackpot
	};

	class Prizes 
	{
		class Level1
		{
			symbol = "\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
			prize = 111;
		};

		class Level2
		{
			symbol = "\exile_assets\texture\item\Exile_Item_CockONut.paa";
			prize = 222;
		};

		class Level3
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Beer.paa";
			prize = 333;
		};

		class Level4
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Knife.paa";
			prize = 444;
		};

		class Level5
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Safe.paa";
			prize = 555;
		};
		
		class Jackpot
		{
			symbol = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
		};
	};
};
class CfgTerritories
{
	// Base Cost / Radius
	// Level 1 is allways for Pop Tabs, >= 2 for Respect
	prices[] = 
	{
		// Purchase Price 		Radius 		Number of Objects
		{50000,					15,			30 					}, // Level 1	//geändert
		{100000,				30,			50 					}, // Level 2	//geändert 
		{150000,				45,			70 					}, // Level 3	//geändert
		{200000,				60,			90					}, // Level 4	//geändert
		{250000,				75,			110					}, // Level 5	//geändert
		{300000,				90,			130					}, // Level 6	//geändert
		{350000,				105,		150					}, // Level 7	//geändert
		{400000,				120,		170					}, // Level 8	//geändert
		{450000,				135,		190					}, // Level 9	//geändert
		{500000,				150,		210					}  // Level 10	//geändert
	};

	// A shortcut of the above maximum radius
	maximumRadius = 150;

	// The above * 2 plus coverving the 20m you can move while placing things
	minimumDistanceToOtherTerritories = 325; 

	// Maximum number of territories a player can own
	maximumNumberOfTerritoriesPerPlayer = 10;

	/**
	 * Defines the minimum distance to safe zones / trader cities where players
	 * cannot build territories
	 */
	minimumDistanceToTraderZones = 1000;

	/**
	 * Defines the minimum distance to spawn zones where players
	 * cannot build territories
	 */
	minimumDistanceToSpawnZones = 900;

	// Amount of pop tabs per object to pay
	popTabAmountPerObject = 10;
};
class CfgTraderCategories 
{
	class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community2
	{
		name = "Community Items 2";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community3
	{
		name = "Community Items 3";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community4
	{
		name = "Community Items 4";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community5
	{
		name = "Community Items 5";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community6
	{
		name = "Community Items 6";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community7
	{
		name = "Community Items 7";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community8
	{
		name = "Community Items 8";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community9
	{
		name = "Community Items 9";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community10
	{
		name = "Community Items 10";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Uniforms
	{
		name = "Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			"U_C_Journalist",
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_burgundy",
			"U_C_Poloshirt_salmon",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_tricolour",
			"U_C_Poloshirt_redwhite",
			"U_C_Poor_1",
			"U_C_Poor_shorts_1",
			"U_C_Scientist",
			"U_OrestesBody",
			"U_Rangemaster",
			"U_C_WorkerCoveralls",
			"U_Competitor",
			"U_C_Driver_1",
            "U_C_Driver_2",
            "U_C_Driver_3",
            "U_C_Driver_4",
            "U_C_Driver_1_black", 							
            "U_C_Driver_1_blue",
            "U_C_Driver_1_green",
            "U_C_Driver_1_red",
            "U_C_Driver_1_white",
            "U_C_Driver_1_yellow",
            "U_C_Driver_1_orange",
			"U_B_CombatUniform_mcam",
			"U_B_CombatUniform_mcam_tshirt",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CombatUniform_mcam_worn",
			"U_B_CTRG_1",
			"U_B_CTRG_2",
			"U_B_CTRG_3",			
            "U_I_C_Soldier_Bandit_4_F",
            "U_I_C_Soldier_Bandit_5_F",
            "U_I_C_Soldier_Bandit_1_F",
            "U_I_C_Soldier_Bandit_3_F",
            "U_I_C_Soldier_Bandit_2_F",
			"U_B_CTRG_Soldier_urb_1_F",
            "U_B_CTRG_Soldier_urb_3_F",
            "U_B_CTRG_Soldier_urb_2_F",
            "U_B_CTRG_Soldier_F",
            "U_B_CTRG_Soldier_3_F",
            "U_B_CTRG_Soldier_2_F",
            "U_B_GEN_Commander_F",
            "U_B_GEN_Soldier_F",
 	        "U_O_T_Sniper_F",
            "U_B_T_Sniper_F", 		
			"U_B_T_Soldier_F",
            "U_B_T_Soldier_AR_F",
			"U_O_T_FullGhillie_tna_F",
            "U_B_T_FullGhillie_tna_F",			
            "U_C_Man_casual_1_F",
			"U_C_Man_casual_2_F",
            "U_C_Man_casual_3_F",
            "U_I_C_Soldier_Para_1_F",
            "U_I_C_Soldier_Para_2_F",
            "U_I_C_Soldier_Para_3_F",
            "U_I_C_Soldier_Para_4_F",
            "U_I_C_Soldier_Para_5_F",
            "U_O_T_Officer_F",
            "U_B_T_Soldier_SL_F",			
            "U_C_Man_casual_4_F",
            "U_C_Man_casual_5_F",
            "U_C_Man_casual_6_F",						
			"U_C_man_sport_1_F",
            "U_C_man_sport_2_F",			
            "U_C_man_sport_3_F",			
			"U_I_C_Soldier_Camo_F",			
            "U_O_T_Soldier_F",			
            "U_O_V_Soldier_Viper_F",
            "U_O_V_Soldier_Viper_hex_F",						
			"U_I_CombatUniform",
			"U_I_CombatUniform_shortsleeve",
			"U_I_OfficerUniform",
			"U_O_CombatUniform_ocamo",
			"U_O_CombatUniform_oucamo",
			"U_O_OfficerUniform_ocamo",
			"U_B_SpecopsUniform_sgg",
			"U_O_SpecopsUniform_ocamo",
			"U_I_G_Story_Protagonist_F",
			"Exile_Uniform_Woodland",
			"Exile_Uniform_BambiOverall",
			"Exile_Uniform_ExileCustoms",
			"U_C_HunterBody_grn",
			"U_Marshal",
			"U_BG_Guerrilla_6_1",
			"U_BG_Guerilla1_1",
			"U_BG_Guerilla2_2",
			"U_IG_Guerilla2_1",
			"U_BG_Guerilla2_3",
			"U_BG_Guerilla3_1",
			"U_BG_leader",
			"U_I_G_resistanceLeader_F",
			"U_B_FullGhillie_ard",
			"U_B_FullGhillie_lsh",
			"U_B_FullGhillie_sard",
			"U_B_GhillieSuit",
			"U_I_FullGhillie_ard",
			"U_I_FullGhillie_lsh",
			"U_I_FullGhillie_sard",
			"U_I_GhillieSuit",
			"U_O_FullGhillie_ard",
			"U_O_FullGhillie_lsh",
			"U_O_FullGhillie_sard",
			"U_O_GhillieSuit",
			"U_B_survival_uniform",
			"U_B_HeliPilotCoveralls",
			"U_I_HeliPilotCoveralls",
			"U_B_PilotCoveralls",
			"U_I_pilotCoveralls",
			"U_O_PilotCoveralls"
		};
	};

	class Vests
	{
		name = "Gilets";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] = 
		{
			"V_Press_F",
			"V_Rangemaster_belt",
			"V_TacVest_blk",
			"V_TacVest_blk_POLICE",
			"V_TacVest_brn",
			"V_TacVest_camo",
			"V_TacVest_khk",
			"V_TacVest_oli",
			"V_TacVestIR_blk",
			"V_I_G_resistanceLeader_F",
			"V_BandollierB_blk",
			"V_BandollierB_cbr",
			"V_BandollierB_khk",
			"V_BandollierB_oli",
			"V_BandollierB_rgr",
			"V_Chestrig_blk",
			"V_Chestrig_khk",
			"V_Chestrig_oli",
			"V_Chestrig_rgr",
			"V_HarnessO_brn",
			"V_HarnessO_gry",
			"V_HarnessOGL_brn",
			"V_HarnessOGL_gry",
			"V_PlateCarrier1_blk",
			"V_PlateCarrier_Kerry",
			"Exile_Vest_Snow",			
            "V_TacVest_gen_F",
            "V_BandollierB_ghex_F",
            "V_TacChestrig_grn_F",
            "V_TacChestrig_oli_F",
			"V_PlateCarrier2_tna_F",
            "V_TacChestrig_cbr_F",
			"V_HarnessOGL_ghex_F",
            "V_HarnessO_ghex_F",
            "V_PlateCarrierGL_tna_F",						
            "V_PlateCarrierSpec_tna_F",
            "V_PlateCarrier1_rgr_noflag_F",
            "V_PlateCarrier1_tna_F",
            "V_PlateCarrier2_rgr_noflag_F",						
			"V_PlateCarrier2_blk",
			"V_PlateCarrier1_rgr",
			"V_PlateCarrier2_rgr",
			"V_PlateCarrierGL_blk",
			"V_PlateCarrierGL_mtp",
			"V_PlateCarrierGL_rgr",
			"V_PlateCarrierH_CTRG",
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrierIA2_dgtl",
			"V_PlateCarrierIAGL_dgtl",
			"V_PlateCarrierIAGL_oli",
			"V_PlateCarrierL_CTRG",
			"V_PlateCarrierSpec_blk",
			"V_PlateCarrierSpec_mtp",
			"V_PlateCarrierSpec_rgr"
		};
	};

	class Kopfbedeckung 
	{
		name = "casque";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"H_Cap_blk",
			"H_Cap_blk_Raven",
			"H_Cap_blu",
			"H_Cap_brn_SPECOPS",
			"H_Cap_grn",
			"H_Cap_headphones",
			"H_Cap_khaki_specops_UK",
			"H_Cap_oli",
			"H_Cap_press",
			"H_Cap_red",
			"H_Cap_tan",
			"H_Cap_tan_specops_US",
            "H_Cap_blk_CMMG", 
            "H_Cap_usblack",
            "H_Cap_oli_hs",
            "H_Cap_blk_ION",
            "H_Cap_grn_BI",
            "H_Cap_police",
            "H_Cap_surfer",
            "H_Cap_marshal",			
			"H_Watchcap_blk",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Watchcap_cbr",
			"Exile_Cap_Exile",			
            "H_Beret_gen_F",
            "H_MilCap_tna_F",
            "H_MilCap_ghex_F",
			"H_MilCap_gen_F",			
            "H_MilCap_tna_F",
			"H_Booniehat_tna_F",						
			"H_MilCap_blue",
			"H_MilCap_dgtl",
			"H_MilCap_mcamo",
			"H_MilCap_ocamo",
			"H_MilCap_gry",
			"H_MilCap_oucamo",
			"H_Bandanna_camo",
			"H_Bandanna_cbr",
			"H_Bandanna_gry",
			"H_Bandanna_khk",
			"H_Bandanna_khk_hs",
			"H_Bandanna_sand",
            "H_Bandanna_surfer_blk",
            "H_Bandanna_surfer_grn",
            "H_Bandanna_blu",
			"H_Bandanna_mcamo",
			"H_Bandanna_sgg",
			"H_Bandanna_surfer",
			"H_Booniehat_dgtl",
			"H_Booniehat_grn",
			"H_Booniehat_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_mcamo",
			"H_Booniehat_oli",
			"H_Booniehat_tan",
			"H_Hat_blue",
			"H_Hat_brown",
			"H_Hat_camo",
			"H_Hat_checker",
			"H_Hat_grey",
			"H_Hat_tan",
			"H_StrawHat",
			"H_StrawHat_dark",
			"Exile_Headgear_SantaHat",
			"H_Beret_02",
			"H_Beret_blk",
			"H_Beret_Colonel",			
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_ShemagOpen_khk",
			"H_ShemagOpen_tan"
		};
	};

	class Helme 
	{
		name = "Helme";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{			
            "H_Helmet_Skate",
            "H_HelmetB_Light_tna_F",
            "H_HelmetB_tna_F",						
            "H_HelmetB_Enh_tna_F",
			"H_HelmetB_TI_tna_F",
            "H_HelmetSpecO_ghex_F",
            "H_HelmetO_ghex_F",
            "H_HelmetCrew_O_ghex_F",
 	        "H_HelmetLeaderO_ghex_F",			
			"Exile_Headgear_SafetyHelmet",			
			"H_HelmetB",
			"H_HelmetB_black",
			"H_HelmetB_camo",
			"H_HelmetB_desert",
			"H_HelmetB_grass",
			"H_HelmetB_light",
			"H_HelmetB_light_black",
			"H_HelmetB_light_desert",
			"H_HelmetB_light_grass",
			"H_HelmetB_light_sand",
			"H_HelmetB_light_snakeskin",
			"H_HelmetB_sand",
			"H_HelmetB_snakeskin",
	        "H_RacingHelmet_1_F",
	        "H_RacingHelmet_2_F",
	        "H_RacingHelmet_3_F",
	        "H_RacingHelmet_4_F",
	        "H_RacingHelmet_1_black_F",
	        "H_RacingHelmet_1_blue_F",
	        "H_RacingHelmet_1_green_F",
	        "H_RacingHelmet_1_red_F",
	        "H_RacingHelmet_1_white_F",
	        "H_RacingHelmet_1_yellow_F",
	        "H_RacingHelmet_1_orange_F",			
			"H_HelmetCrew_B",
			"H_HelmetCrew_I",
			"H_HelmetCrew_O",
			"H_HelmetIA",
			"H_HelmetLeaderO_ocamo",
			"H_HelmetLeaderO_oucamo",
			"H_HelmetO_ocamo",
			"H_HelmetO_oucamo",
			"H_HelmetSpecB",
			"H_HelmetSpecB_blk",
			"H_HelmetSpecB_paint1",
			"H_HelmetSpecB_paint2",
            "H_HelmetSpecB_snakeskin",
            "H_HelmetSpecB_sand",			
			"H_HelmetSpecO_blk",
			"H_HelmetSpecO_ocamo",
			"H_CrewHelmetHeli_B",
			"H_CrewHelmetHeli_I",
			"H_CrewHelmetHeli_O",
			"H_PilotHelmetHeli_B",
			"H_PilotHelmetHeli_I",
			"H_PilotHelmetHeli_O"
		};
	};		

	class PointerAttachments 
	{
		name = "Pointeur laser / lampe de poche";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"acc_flashlight",
			"acc_pointer_IR"
		};
	};

	class BipodAttachments 
	{
		name = "BiPod";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] = 
		{
			"bipod_01_F_blk",
			"bipod_01_F_mtp",
			"bipod_01_F_snd",
			"bipod_02_F_blk",
			"bipod_02_F_hex",
			"bipod_01_F_khk",			
			"bipod_02_F_tan",
			"bipod_03_F_blk",
			"bipod_03_F_oli"
		};
	};

	class MuzzleAttachments 
	{
		name = "silencieux";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] = 
		{
			"muzzle_snds_338_black",
			"muzzle_snds_338_green",
			"muzzle_snds_338_sand",
			"muzzle_snds_93mmg",
			"muzzle_snds_93mmg_tan",
			"muzzle_snds_acp",
			"muzzle_snds_B",			
            "muzzle_snds_H_khk_F",
			"muzzle_snds_H_snd_F",
            "muzzle_snds_B_khk_F",			
            "muzzle_snds_B_snd_F",
			"muzzle_snds_H_MG_blk_F",
            "muzzle_snds_H_MG_khk_F",
            "muzzle_snds_65_TI_blk_F",
            "muzzle_snds_65_TI_hex_F",
            "muzzle_snds_65_TI_ghex_F",
            "muzzle_snds_58_blk_F",
            "muzzle_snds_58_wdm_F",
            "muzzle_snds_m_snd_F",
            "muzzle_snds_m_khk_F",						
			"muzzle_snds_H",
			"muzzle_snds_H_MG",
			"muzzle_snds_L",
			"muzzle_snds_M"
		};
	};

	class UAVs
	{
		name = "UAV";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
		items[] = 
		{
			"I_UavTerminal",
			"I_UAV_01_backpack_F",
			"O_UavTerminal",
			"O_UAV_01_backpack_F",			
			"B_UavTerminal",
			"B_UAV_01_backpack_F"
		};
	};

	class StaticMGs
	{
		name = "Machine gun statique";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"O_HMG_01_support_F",
			"O_HMG_01_weapon_F"
		};
	};

	class OpticAttachments 
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] = 
		{
			"optic_Aco",
			"optic_ACO_grn",
			"optic_ACO_grn_smg",
			"optic_Aco_smg",
			"optic_AMS",
			"optic_AMS_khk",
			"optic_AMS_snd",
			"optic_Arco",
			"optic_DMS",
			"optic_Hamr",
			"optic_Holosight",
			"optic_Holosight_smg",
			"optic_KHS_blk",
			"optic_KHS_hex",
			"optic_KHS_old",
			"optic_KHS_tan",
            "optic_Holosight_smg_blk_F",
            "optic_Holosight_blk_F",						
            "optic_LRPS_tna_F",
            "optic_LRPS_ghex_F",
            "optic_SOS_khk_F",
            "optic_Hamr_khk_F",
 	        "optic_ERCO_khk_F",
            "optic_ERCO_snd_F", 			
			"optic_ERCO_blk_F",
            "optic_DMS_ghex_F",
			"optic_Arco_blk_F",
            "optic_Arco_ghex_F",			
			"optic_Holosight_khk_F",			
			"optic_LRPS",
			"optic_MRCO",
			"optic_MRD",
			"optic_Nightstalker",
			"optic_NVS",
			"optic_SOS",
			"optic_tws",
			"optic_tws_mg",
			"optic_Yorris"
		};
	};

	class Hardware 
	{
		name = "Hardware";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			
			"Exile_Item_Rope",
			"Exile_Item_DuctTape",
			"Exile_Item_ExtensionCord",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_JunkMetal",
			"Exile_Item_LightBulb",
			"Exile_Item_MetalBoard",
			"Exile_Item_MetalPole",
			"Exile_Item_SafeKit",
			"Exile_Item_CamoTentKit",										
            //"Exile_Item_Defibrillator",			
			"Exile_Item_CodeLock",
			"Exile_Item_Foolbox"
		};
	};

	class Food 
	{
		name = "nourriture";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_Surstromming",
			"Exile_Item_SausageGravy",
			"Exile_Item_Catfood",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_BBQSandwich",
			"Exile_Item_Dogfood",
			"Exile_Item_EMRE",			
			"Exile_Item_BeefParts",
			"Exile_Item_MacasCheese",
			"Exile_Item_Cheathas",
			"Exile_Item_Noodles",
			"Exile_Item_SeedAstics",		
			"Exile_Item_Raisins",
			"Exile_Item_Moobar",
			"Exile_Item_CockONut",
			"Exile_Item_DsNuts",			
			"Exile_Item_InstantCoffee"
		};
	};

	class Zeitschriften
	{
		name = "Journaux";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{			
			"Exile_Item_Magazine01",
			"Exile_Item_Magazine02",
			"Exile_Item_Magazine03",
			"Exile_Item_Magazine04"									
		};
	};	

	class Sonstiges
	{
		name = "autre";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{						
			"Exile_Item_Matches",
			"Exile_Item_CookingPot",
            "Exile_Item_CanOpener"									
		};
	}
	
	class Drinks 
	{
		name = "boissons";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_PlasticBottleCoffee",
			"Exile_Item_PowerDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_Beer",
			"Exile_Item_EnergyDrink",
			"Exile_Item_MountainDupe",
			"Exile_Item_PlasticBottleEmpty"
		};
	};

	class Brillen
	{
		name = "Lunettes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "G_Combat",
            "G_Tactical_Clear",
            "G_Shades_Black",
            "G_Shades_Blue",
            "G_Sport_Blackred",
            "G_Spectacles",
            "G_Spectacles_Tinted",
            "G_Lowprofile",
            "G_Shades_Green",
			"G_Lady_Blue",		
            "G_Combat_Goggles_tna_F",			
            "G_Aviator",
            "G_Goggles_VR",
            "G_Shades_Red",
            "G_Squares",
            "G_Squares_Tinted",
            "G_Sport_BlackWhite",
            "G_Sport_Blackyellow",
            "G_Sport_Greenblack",
            "G_Sport_Checkered",
            "G_Sport_Red",
	        "G_Lady_Mirror",
	        "G_Lady_Dark",
	        "G_Lady_Red",
	        "G_Balaclava_blk",
	        "G_Balaclava_oli",
	        "G_Balaclava_combat",
	        "G_Balaclava_lowprofile",
	        "G_Bandanna_blk",
	        "G_Bandanna_oli",
	        "G_Bandanna_khk",
	        "G_Bandanna_tan",
	        "G_Bandanna_beast",
	        "G_Bandanna_shades",
	        "G_Bandanna_sport",
	        "G_Bandanna_aviator",
	        "G_Balaclava_TI_blk_F",
	        "G_Balaclava_TI_tna_F",
	        "G_Balaclava_TI_G_blk_F",
	        "G_Balaclava_TI_G_tna_F",			
            "G_Tactical_Black"
		};
	};	

	class Fernglaeser
	{
		name = "jumelles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{					
			"Binocular",
			"Rangefinder"
		};
	};

	class Nachtsichtgeraete
	{
		name = "vision de nuit";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{								
            "NVGoggles_tna_F",
            "O_NVGoggles_ghex_F",			
            "O_NVGoggles_urb_F",
			"O_NVGoggles_hex_F",					
			"NVGoggles",
			"NVGoggles_INDEP",
			"NVGoggles_OPFOR"
		};
	};
	
	class Tools
	{
		name = "Equipment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{					
			"ItemGPS",
			"ItemMap",
			"ItemCompass",			
			"ItemRadio",
			"ItemWatch",
			"Exile_Item_XM8"
		};
	};

	class Medikamente
	{
		name = "MediKit";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_InstaDoc",
			"Exile_Item_Heatpack",
			"Exile_Item_Bandage",
			"Exile_Item_Vishpirin"
		};
	};

	class Navigat
	{
		name = "Navigat";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Laserdesignator",
			"Laserdesignator_02",		
            "Laserdesignator_02_ghex_F",
            "Laserdesignator_01_khk_F",				
			"Laserdesignator_03"	
		};
	};
	
	class Navigation
	{
		name = "Navigation";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"B_Parachute",
			"Exile_Headgear_GasMask",
            "NVGogglesB_grn_F",
            "NVGogglesB_gry_F",
            "NVGogglesB_blk_F",
			"H_PilotHelmetFighter_B",
			"H_PilotHelmetFighter_O",
			"H_PilotHelmetFighter_I",			
            "H_HelmetO_ViperSP_ghex_F", 			
			"H_HelmetO_ViperSP_hex_F"	
		};
	};

	class Backpacks
	{
		name = "Sac";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] = 
		{
			"B_AssaultPack_blk",
			"B_AssaultPack_cbr",
			"B_AssaultPack_dgtl",
			"B_AssaultPack_Kerry",
			"B_AssaultPack_khk",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_ocamo",
			"B_AssaultPack_rgr",
			"B_AssaultPack_sgg",
			"B_Bergen_blk",
			"B_Bergen_mcamo",
			"B_Bergen_rgr",
			"B_Bergen_sgg",
			"B_Carryall_cbr",
			"B_Carryall_khk",
			"B_Carryall_mcamo",
			"B_Carryall_ocamo",
			"B_Carryall_oli",
			"B_Carryall_oucamo",
			"B_FieldPack_blk",
			"B_FieldPack_cbr",
			"B_FieldPack_ocamo",
			"B_FieldPack_oucamo",
			"B_FieldPack_oli",
			"B_FieldPack_khk",
			"B_HuntingBackpack",	
            "B_Carryall_ghex_F",
            "B_FieldPack_ghex_F",			
            "B_AssaultPack_tna_F",
			"B_Bergen_hex_F",
            "B_Bergen_tna_F",
            "B_Bergen_dgtl_F",
            "B_Bergen_mcamo_F",
            "B_ViperLightHarness_ghex_F",
            "B_ViperLightHarness_khk_F",
            "B_ViperLightHarness_oli_F",
            "B_ViperLightHarness_blk_F",
            "B_ViperLightHarness_hex_F",			
            "B_ViperHarness_oli_F",
            "B_ViperHarness_blk_F",
            "B_ViperHarness_khk_F",						
			"B_ViperHarness_hex_F",
            "B_ViperHarness_ghex_F",						
			"B_Kitbag_cbr",
			"B_Kitbag_mcamo",
			"B_Kitbag_sgg",
			"B_Kitbag_rgr",
			"B_OutdoorPack_blk",
			"B_OutdoorPack_blu",
			"B_OutdoorPack_tan",
			"B_TacticalPack_blk",
			"B_TacticalPack_mcamo",
			"B_TacticalPack_ocamo",
			"B_TacticalPack_oli",
			"B_TacticalPack_rgr"
		};
	};

	class Ammunition
	{
		name = "Munition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"11Rnd_45ACP_Mag",
			"130Rnd_338_Mag",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box_Tracer",
			"150Rnd_93x64_Mag", 
			"16Rnd_9x21_Mag",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"20Rnd_556x45_UW_mag",
			"20Rnd_762x51_Mag",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01_tracer_green",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_9x21_Mag",		
			"Exile_Magazine_30Rnd_762x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow",
			"Exile_Magazine_45Rnd_545x39_RPK_Green",
			"Exile_Magazine_75Rnd_545x39_RPK_Green",
			"Exile_Magazine_20Rnd_762x51_DMR",
			"Exile_Magazine_20Rnd_762x51_DMR_Yellow",
			"Exile_Magazine_20Rnd_762x51_DMR_Red",
			"Exile_Magazine_20Rnd_762x51_DMR_Green",
            "30Rnd_9x21_Mag_SMG_02",
            "30Rnd_9x21_Mag_SMG_02_Tracer_Red",
            "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
            "30Rnd_9x21_Mag_SMG_02_Tracer_Green",
            "30Rnd_580x42_Mag_F",
            "30Rnd_580x42_Mag_Tracer_F",
            "100Rnd_580x42_Mag_F",
            "100Rnd_580x42_Mag_Tracer_F",
            "20Rnd_650x39_Cased_Mag_F",
            "10Rnd_50BW_Mag_F",
            "150Rnd_556x45_Drum_Mag_F",
            "150Rnd_556x45_Drum_Mag_Tracer_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_Green_F",
            "30Rnd_762x39_Mag_Tracer_F",
            "30Rnd_762x39_Mag_Tracer_Green_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_Green_F",
            "30Rnd_545x39_Mag_Tracer_F",
            "30Rnd_545x39_Mag_Tracer_Green_F",
            "200Rnd_556x45_Box_F",
            "200Rnd_556x45_Box_Red_F",
            "200Rnd_556x45_Box_Tracer_F",
            "200Rnd_556x45_Box_Tracer_Red_F",			
			"Exile_Magazine_10Rnd_303",
			"Exile_Magazine_100Rnd_762x54_PK_Green",
			"Exile_Magazine_7Rnd_45ACP",
			"Exile_Magazine_8Rnd_9x18",
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_6Rnd_45ACP",
			"Exile_Magazine_5Rnd_22LR",
			"Exile_Magazine_10Rnd_762x54",
			"Exile_Magazine_10Rnd_9x39",
			"Exile_Magazine_20Rnd_9x39",
			/*
			"Exile_Magazine_20Rnd_762x51_DMR_White",			
			"Exile_Magazine_8Rnd_74Pellets",
			*/
			"Exile_Magazine_8Rnd_74Slug",						
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_Mag",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F",
			"7Rnd_408_Mag",
			"10Rnd_9x21_Mag",
			"9Rnd_45ACP_Mag"
		};
	};

	class Flares 
	{
		name = "Flares";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Chemlight_blue",
			"Chemlight_green",
			"Chemlight_red",
			"Chemlight_yellow",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareYellow_F"
		};
	};

	class Smokes 
	{
		name = "Smokes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellYellow",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell"
		};
	};	

	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] = 
		{
			"HandGrenade",
			"MiniGrenade",
			"B_IR_Grenade",
			"O_IR_Grenade",
			"I_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"APERSBoundingMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSTripMine_Wire_Mag",
			"ClaymoreDirectionalMine_Remote_Mag",			
			"DemoCharge_Remote_Mag",
			"IEDLandBig_Remote_Mag",
			"IEDLandSmall_Remote_Mag",
			"IEDUrbanBig_Remote_Mag",
			"IEDUrbanSmall_Remote_Mag",
            "Exile_Item_BreachingCharge_BigMomma",
            "Exile_Item_BreachingCharge_Metal",
            "Exile_Item_BreachingCharge_Wood",					
			"SatchelCharge_Remote_Mag",			
			"SLAMDirectionalMine_Wire_Mag"
		};
	};

	class Spezielles
	{
		name = "special";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] = 
		{
            "Exile_Item_MobilePhone"
		};
	};	
	
	class Pistols 
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] = 
		{
			"hgun_ACPC2_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_heavy_02_F",			
			"Exile_Weapon_Colt1911",
			"Exile_Weapon_Makarov",
			"Exile_Weapon_Taurus",
			"Exile_Weapon_TaurusGold",					
			"hgun_Pistol_Signal_F",			
            "hgun_P07_khk_F",
            "hgun_Pistol_01_F",						
			"hgun_Rook40_F"
		};
	};

	class SubMachineGuns 
	{
		name = "Sub MachineGuns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"hgun_PDW2000_F",
			"SMG_01_F",
            "SMG_05_F",			
			"SMG_02_F"
		};
	};

	class LightMachineGuns 
	{
		name = "Light MachineGuns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MX_SW_Black_F",
			"arifle_MX_SW_F",
			"LMG_Mk200_F",
			"LMG_Zafir_F",		
			"MMG_01_hex_F",			
			"Exile_Weapon_RPK",
			"Exile_Weapon_PK",
			"Exile_Weapon_PKP",					
			"MMG_01_tan_F",
			"MMG_02_black_F",
			"MMG_02_camo_F",			
            "arifle_CTARS_blk_F",
			"arifle_CTARS_hex_F",
            "arifle_CTARS_ghex_F",
            "arifle_SPAR_02_snd_F",
            "arifle_SPAR_02_khk_F",
			"arifle_SPAR_02_blk_F",
            //"arifle_MX_SW_khk_F",
            "LMG_03_F",						
			"MMG_02_sand_F"
			
		};
	};

	class AssaultRifles
	{
		name = "Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_Katiba_C_F",
			"arifle_Katiba_F",
			"arifle_Katiba_GL_F",
			"arifle_Mk20_F",
			"arifle_Mk20_GL_F",
			"arifle_Mk20_GL_plain_F",
			"arifle_Mk20_plain_F",
			"arifle_Mk20C_F",
			"arifle_Mk20C_plain_F",			
            "arifle_ARX_blk_F",
            "arifle_ARX_ghex_F",
            "arifle_ARX_hex_F",			
            "arifle_MXC_khk_F",
            "arifle_MX_GL_khk_F",
            "arifle_MX_khk_F",						
			"arifle_SPAR_01_blk_F",
            "arifle_SPAR_01_khk_F",			
            "arifle_SPAR_01_snd_F",			
			"arifle_SPAR_01_GL_blk_F",			
            "arifle_SPAR_01_GL_khk_F",			
            "arifle_SPAR_01_GL_snd_F",			
            "arifle_CTAR_blk_F",
            "arifle_CTAR_GL_blk_F",
			"arifle_CTAR_hex_F",
            "arifle_CTAR_GL_ghex_F",
            "arifle_CTAR_ghex_F",
            "arifle_CTAR_GL_hex_F",		
			"arifle_MX_Black_F",
			"arifle_MX_F",
			"arifle_MX_GL_Black_F",
			"arifle_MX_GL_F",
			"arifle_MXC_Black_F",
			"arifle_MXC_F",
			"arifle_SDAR_F",			
            "arifle_AK12_F",
            "arifle_AK12_GL_F",
            "Exile_Weapon_AK107",
            "Exile_Weapon_AK107_GL",
            "Exile_Weapon_AK74",
            "Exile_Weapon_AK74_GL",
            "Exile_Weapon_AK47",
            "arifle_AKM_F",
            "arifle_AKS_F",
            "Exile_Weapon_AKS_Gold",			
			"arifle_TRG20_F",
			"arifle_TRG21_F",
			"arifle_TRG21_GL_F"
		};
	};

	class Shotguns
	{
		name = "Shotguns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Weapon_M1014"
		};
	};	
	
	class SniperRifles
	{
		name = "SniperRifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MXM_Black_F",
			"arifle_MXM_F",
			"srifle_DMR_01_F",
			"srifle_DMR_02_camo_F",
			"srifle_DMR_02_F",
			"srifle_DMR_02_sniper_F",
			"srifle_DMR_03_F",
			"srifle_DMR_03_khaki_F",
			"srifle_DMR_03_multicam_F",
			"srifle_DMR_03_tan_F",
			"srifle_DMR_03_woodland_F",
			"srifle_DMR_04_F",
			"srifle_DMR_04_Tan_F",			
			"Exile_Weapon_CZ550",
			"Exile_Weapon_SVD",
			"Exile_Weapon_SVDCamo",
			"Exile_Weapon_VSSVintorez",
			"Exile_Weapon_DMR",
			"Exile_Weapon_LeeEnfield",						
			"srifle_DMR_05_blk_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_05_tan_f",
			"srifle_DMR_06_camo_F",			
            "srifle_LRR_tna_F",
            "srifle_GM6_ghex_F",
            "arifle_MXM_khk_F",
			"srifle_DMR_07_blk_F",
            "srifle_DMR_07_hex_F",
            "srifle_DMR_07_ghex_F",
            "arifle_SPAR_03_blk_F",			
            "arifle_SPAR_03_khk_F",
            "arifle_SPAR_03_snd_F",					
			"srifle_DMR_06_olive_F",
			"srifle_EBR_F",
			"srifle_GM6_camo_F",
			"srifle_GM6_F",
			"srifle_LRR_camo_F",
			"srifle_LRR_F"
		};
	};

	class Bikes
	{
		name = "Bikes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Bike_OldBike",
			"Exile_Bike_MountainBike"
		};
	};

	class Cars
	{
		name = "Vehicule";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_Kart_Black",
			"Exile_Bike_QuadBike_Black",
			"Exile_Car_OldTractor_Red",
			"Exile_Car_Tractor_Red",
			"Exile_Car_UAZ_Green",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_Octavius_White",			
			"Exile_Car_Golf_Red",
			"Exile_Car_SUV_Armed_Black",
			"Exile_Car_BRDM2_HQ",
			"Exile_Car_BTR40_MG_Green",
			"Exile_Car_BTR40_Green",
			"Exile_Car_HMMWV_M134_Green",
			"Exile_Car_HMMWV_M2_Green",
			"Exile_Car_HMMWV_MEV_Green",
			"Exile_Car_HMMWV_UNA_Green",									
			"Exile_Car_LandRover_Green",			
			"Exile_Car_LandRover_Ambulance_Green",			
			"Exile_Car_Lada_Green",
			"Exile_Car_Volha_White",			
			"B_GEN_Offroad_01_gen_F",			
			"Exile_Car_Offroad_White",
			"Exile_Car_ProwlerLight",
			"Exile_Car_QilinUnarmed",
			"Exile_Car_ProwlerUnarmed",
			"Exile_Car_MB4WD",
			"Exile_Car_MB4WDOpen",			
			"B_LSV_01_armed_F",
			"O_T_LSV_02_armed_arid_F",
			"O_T_LSV_02_armed_ghex_F",
			"O_T_LSV_02_armed_black_F",
			"Exile_Car_SUV_Red",
			"Exile_Car_SUVXL_Black",
            "Exile_Car_Hatchback_Yellow",
			"Exile_Car_TowTractor_White",			
			"Exile_Car_Hatchback_Sport_Red",			
			"Exile_Car_Offroad_Repair_Civillian",
			"Exile_Car_Offroad_Armed_Guerilla01",
			"I_MRAP_03_F",
			"Exile_Car_Hunter",
			"Exile_Car_Ifrit"
		};
	};

	class Trucks
	{
		name = "Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Tempest",
			"Exile_Car_HEMMT",
			"I_Truck_02_medical_F",			
			"C_Truck_02_covered_F",
            "C_Truck_02_transport_F",
            "C_Truck_02_fuel_F",
            "C_Truck_02_box_F",									
			"B_Truck_01_box_F",						
            "O_Truck_03_medical_F",
			"O_Truck_03_covered_F",
            "O_Truck_03_repair_F",	
            "O_Truck_03_fuel_F",
            "B_Truck_01_medical_F",	
            "B_Truck_01_fuel_F",
			"B_Truck_01_covered_F",			
			"Exile_Car_V3S_Covered",						
            "B_Truck_01_Repair_F",
			"B_Truck_01_mover_F",
			"Exile_Car_Ikarus_Blue",
			"Exile_Car_Ural_Open_Worker",
			"Exile_Car_Ural_Covered_Worker"
		};
	};

	class Choppers
	{
		name = "Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Chopper_Hummingbird_Green",
			"Exile_Chopper_Hummingbird_Civillian_ION",
			"Exile_Chopper_Taru_Black",
			"Exile_Chopper_Taru_Covered_Black",
			"Exile_Chopper_Taru_Transport_Black",
			"Exile_Chopper_Orca_BlackCustom",			
			"Exile_Plane_BlackfishInfantry",
			"Exile_Plane_BlackfishVehicle",	
			"Exile_Chopper_Mohawk_FIA",
			"Exile_Chopper_Huron_Black",
			"B_Heli_Transport_01_F",
            "B_Heli_Transport_03_black_F",
			"O_Heli_Light_02_v2_F",
			"Exile_Chopper_Huey_Green",
			"Exile_Chopper_Huey_Armed_Green",
			"Exile_Chopper_Hellcat_Green"
		};
	};

	class Boats
	{
		name = "Boote";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Boat_MotorBoat_Police",			
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_MotorBoat_Orange",
            "Exile_Boat_WaterScooter",
			"I_C_Boat_Transport_02_F",		
			"Exile_Boat_RubberDuck_Blue",			
			"I_Boat_Armed_01_minigun_F",			
			"Exile_Boat_SDV_Grey"
		};
	};

	class Planes
	{
		name = "Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Plane_Cessna",			
            "Exile_Plane_AN2_Green",			
            "Exile_Plane_Ceasar",			
			"GNT_C185F"
		};
	};
	class Diving 
	{
		name = "Tauchausrüstung";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"G_B_Diving",
			"G_Diving",
			"G_O_Diving",
			"G_I_Diving",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit"
		};
	};	
};

class CfgTraders
{
	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"PointerAttachments",
			"BipodAttachments",
			"MuzzleAttachments",
			"OpticAttachments",
			"Ammunition",
			"Pistols",
			"SubMachineGuns",
			"LightMachineGuns",
			"AssaultRifles",
			"SniperRifles"
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] = 
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Navigation",
			"Navigat",
			"Spezielles",
			"Explosives"
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{	
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Brillen",
			"Kopfbedeckung",
			"Helme",
			"Uniforms",
			"Vests",			
			"Backpacks",
			"Fernglaeser",
			"Nachtsichtgeraete",
			"Tools",			
			"Medikamente"
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Zeitschriften",
			"Sonstiges",
			"Drinks"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware"
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Cars",
			"Trucks"
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers", 
			"Planes"
		};
	};

	/**
	 * Sells ships and boats
	 */ 
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats"
		};
	};

	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Diving"
		};
	};

	/**
	 * Sells Community Items
	 */ 
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community"
		};
	};

	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community2"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};
};
class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.5;
	
	rekeyPriceFactor = 0.1;

	class requiredRespect 
	{
		Level1 = 5;
		Level2 = 7500;
		Level3 = 12500;
		Level4 = 17500;
		Level5 = 22500;
		Level6 = 27500;
	};
};
class CfgVehicleCustoms
{
	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Bike_QuadBike_Blue",		200, "Blue",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"};},
			{"Exile_Bike_QuadBike_Pink", 	    200, "Pink",        {"#(rgb,8,8,3)color(1,0.08,0.57,1)"};},	
			{"Exile_Bike_QuadBike_Hex", 	    200, "Green Hex",         {"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_ghex_CO.paa","\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_wheel_ghex_CO.paa"};},			
			{"Exile_Bike_QuadBike_Red",			200, "Red",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"};},
			{"Exile_Bike_QuadBike_White",		200, "White",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"};},
			{"Exile_Bike_QuadBike_Nato",		300, "NATO",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"};},
			{"Exile_Bike_QuadBike_Csat",		300, "CSAT",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"};},
			{"Exile_Bike_QuadBike_Fia",			300, "FIA",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla01",	300, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla02",	300, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"};},
			{"Exile_Bike_QuadBike_Black",		200, "Black",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_MotorBoat_Police",		1300, "Police", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};},			
			{"Exile_Boat_MotorBoat_Orange",		1200, "Orange", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"};},
			{"Exile_Boat_MotorBoat_Red",		1300, "Red", {"\a3\boat_f_gamma\Boat_Civil_04\data\boat_civil_04_1_co.paa","\a3\boat_f_gamma\Boat_Civil_04\data\boat_civil_04_2_co.paa"};},
			{"Exile_Boat_MotorBoat_Pink", 	    1200, "Pink", {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},				
			{"Exile_Boat_MotorBoat_White",		1200, "White",  {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};}
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_RubberDuck_CSAT",		750, "CSAT", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"};},
			{"Exile_Boat_RubberDuck_Digital",	750, "Digital",{"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"};},
			{"Exile_Boat_RubberDuck_Orange",	600, "Orange", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"};},
			{"Exile_Boat_RubberDuck_Blue",		600, "Blue", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"};},
			{"Exile_Boat_RubberDuck_Pink", 	    600, "Pink", {"#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"Exile_Boat_RubberDuck_Black",		600, "Black", {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Jetski
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_WaterScooter_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_WaterScooter",		400, "Blue", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"};},
			{"Exile_Boat_WaterScooter",     400, "Pink", {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"Exile_Boat_WaterScooter",		400, "Grey", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"};},
			{"Exile_Boat_WaterScooter",		400, "Lime", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"};},
			{"Exile_Boat_WaterScooter",		400, "Red", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};},
			{"Exile_Boat_WaterScooter",		400, "White", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};},
			{"Exile_Boat_WaterScooter",		400, "Yellow", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"};}
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_SDV_CSAT",		850, "CSAT", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"};},
			{"Exile_Boat_SDV_Digital",	850, "Digital", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"};},
			{"Exile_Boat_SDV_Pink", 	800, "Pink", {"#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"Exile_Boat_SDV_Grey",		800, "Grey", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Schnell Boot MG
	///////////////////////////////////////////////////////////////////////////////
	class Boat_Armed_01_minigun_base_F
	{
		skins[] = 
		{			
			{"I_Boat_Armed_01_minigun_CSAT_F",		1800, "CSAT", {"\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_ext_co.paa","\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_co.paa","\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_crows_blufor_co.paa"};},
			{"I_Boat_Armed_01_minigun_FIA_F",	    1800, "FIA", {"\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_ext_INDP_co.paa","\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_int_INDP_co.paa","\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_crows_INDP_co.paa"};},
			{"I_Boat_Armed_01_minigun_Pink_F", 	    1800, "Pink", {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"I_Boat_Armed_01_minigun_OPFER_F",		1800, "OPFER", {"\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_ext_opfor_co.paa","\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_opfor_co.paa","\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_crows_OPFOR_co.paa"};}
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hellcat_Green", 1700, "Green", 	{"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};},
			{"Exile_Chopper_Hellcat_Pink", 	1700, "Pink", {"#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"Exile_Chopper_Hellcat_FIA", 	1700, "FIA", 	{"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat armed
	///////////////////////////////////////////////////////////////////////////////
	class Heli_light_03_base_F
	{
		skins[] = 
		{
			{"I_Heli_light_03_F",           1700, "Green", 	{"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};},
			{"I_Heli_light_03_F", 	        1700, "Pink", {"#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"I_Heli_light_03_F", 	        1700, "FIA", 	{"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_INDP_CO.paa"};}
		};
	};
		
	///////////////////////////////////////////////////////////////////////////////
	// Karts
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Kart_BluKing", 				200, "Bluking", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_RedStone", 			200, "RedStone", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},
			{"Exile_Car_Kart_Vrana", 				200, "Vrana", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Green", 				200, "Green", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Pink", 	            200, "Pink",        {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},				
			{"Exile_Car_Kart_Blue", 				200, "Blue", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Orange", 				200, "Orange",		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_White", 				200, "White", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Yellow", 				200, "Yellow", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Black", 				200, "Black", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};}	
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		1200, "Blue", 		    {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		1200, "Red", 		    {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		1200, "ION", 		    {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	1200, "BlueLine", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	1200, "Digital", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	1200, "Elliptical", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	1200, "Furious", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 1200, "GrayWatcher",	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		1200, "Jeans", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Pink", 	    1200, "Pink",           {"#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		1200, "Light", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		1200, "Shadow", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	1200, "Sheriff", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		1200, "Speedy", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		1200, "Sunset", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		1200, "Vrana", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		1200, "Wasp", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		1200, "Wave", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird  
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hummingbird_Blue", 		    1200, "Blue", 		    {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"};},
			{"Exile_Chopper_Hummingbird_Red", 		    1200, "Red", 		    {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"};},
			{"Exile_Chopper_Hummingbird_ION", 		    1200, "ION", 		    {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};},
			{"Exile_Chopper_Hummingbird_BlueLine", 	    1200, "BlueLine", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"};},
			{"Exile_Chopper_Hummingbird_Digital", 	    1200, "Digital", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};},
			{"Exile_Chopper_Hummingbird_Elliptical", 	1200, "Elliptical", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"};},
			{"Exile_Chopper_Hummingbird_Furious", 	    1200, "Furious", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"};},
			{"Exile_Chopper_Hummingbird_GrayWatcher",   1200, "GrayWatcher",	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"};},
			{"Exile_Chopper_Hummingbird_Jeans", 		1200, "Jeans", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"};},
			{"Exile_Chopper_Hummingbird_Green", 		1200, "Green", 		    {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_Blufor_CO.paa"};},
			{"Exile_Chopper_Hummingbird_fia", 		    1200, "FIA", 		    {"A3\Air_F\Heli_Light_01\Data\heli_light_01_ext_indp_CO.paa"};},			
			{"Exile_Chopper_Hummingbird_Pink", 	        1200, "Pink",           {"#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"Exile_Chopper_Hummingbird_Light", 		1200, "Light", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"};},
			{"Exile_Chopper_Hummingbird_Shadow", 		1200, "Shadow", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"};},
			{"Exile_Chopper_Hummingbird_Sheriff", 	    1200, "Sheriff", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"};},
			{"Exile_Chopper_Hummingbird_Speedy", 		1200, "Speedy", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"};},
			{"Exile_Chopper_Hummingbird_Sunset", 		1200, "Sunset", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"};},
			{"Exile_Chopper_Hummingbird_Vrana", 		1200, "Vrana", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"};},
			{"Exile_Chopper_Hummingbird_Wasp", 		    1200, "Wasp", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"};},
			{"Exile_Chopper_Hummingbird_Wave", 		    1200, "Wave", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"};}
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird  armed
	///////////////////////////////////////////////////////////////////////////////
	class Heli_Light_01_armed_base_F
	{
		skins[] = 
		{
			{"B_Heli_Light_01_armed_Blue_F", 		1200, "Blue", 		    {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"};},
			{"B_Heli_Light_01_armed_Red_F", 		1200, "Red", 		    {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"};},
			{"B_Heli_Light_01_armed_ION_F", 		1200, "ION", 		    {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};},
			{"B_Heli_Light_01_armed_BlueLine_F",    1200, "BlueLine", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"};},
			{"B_Heli_Light_01_armed_Digital_F", 	1200, "Digital", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};},
			{"B_Heli_Light_01_armed_Elliptical_F", 	1200, "Elliptical", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"};},
			{"B_Heli_Light_01_armed_Furious_F", 	1200, "Furious", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"};},
			{"B_Heli_Light_01_armed_GrayWatcher_F", 1200, "GrayWatcher",	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"};},
			{"B_Heli_Light_01_armed_Jeans_F", 		1200, "Jeans", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"};},
			{"B_Heli_Light_01_armed_Green_F", 		1200, "Green", 		    {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_Blufor_CO.paa"};},
			{"B_Heli_Light_01_armed_fia_F", 		1200, "FIA", 		    {"A3\Air_F\Heli_Light_01\Data\heli_light_01_ext_indp_CO.paa"};},			
			{"B_Heli_Light_01_armed_Pink_F", 	    1200, "Pink",           {"#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"B_Heli_Light_01_armed_Light_F", 		1200, "Light", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"};},
			{"B_Heli_Light_01_armed_Shadow_F", 		1200, "Shadow", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"};},
			{"B_Heli_Light_01_armed_Sheriff_F", 	1200, "Sheriff", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"};},
			{"B_Heli_Light_01_armed_Speedy_F", 		1200, "Speedy", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"};},
			{"B_Heli_Light_01_armed_Sunset_F", 		1200, "Sunset", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"};},
			{"B_Heli_Light_01_armed_Vrana_F", 		1200, "Vrana", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"};},
			{"B_Heli_Light_01_armed_Wasp_F", 		1200, "Wasp", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"};},
			{"B_Heli_Light_01_armed_Wave_F", 		1200, "Wave", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huron_Black", 	    3500, "Black", {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};},
			{"Exile_Chopper_Huron_Pink", 	    3500, "Pink", {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"Exile_Chopper_Huron_Green", 	    3500, "Green", {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};}			
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// Huron armed
	///////////////////////////////////////////////////////////////////////////////
	class B_Heli_Transport_03_black_F
	{
		skins[] = 
		{
			{"B_Heli_Transport_03_Black_F", 	3500, "Black", {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};},
			{"B_Heli_Transport_03_Pink_F", 	    3500, "Pink", {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"B_Heli_Transport_03_Green_F", 	3500, "Green", {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};}			
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// Huron armed
	///////////////////////////////////////////////////////////////////////////////
	class B_Heli_Transport_03_F
	{
		skins[] = 
		{
			{"B_Heli_Transport_03_Green_F", 	3500, "Green", {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};},
			{"B_Heli_Transport_03_Pink_F", 	    3500, "Pink", {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"B_Heli_Transport_03_Black_F", 	3500, "Black", {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};}			
		};
	};		
	
	///////////////////////////////////////////////////////////////////////////////
	// UH-80 Ghost Hawk
	///////////////////////////////////////////////////////////////////////////////
	class Heli_Transport_01_base_F
	{
		skins[] = 
		{
			{"B_Heli_Transport_01_F", 	    3500, "Black", {"\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_CO.paa","\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext02_CO.paa"};},
			{"B_Heli_Transport_01_Pink_F", 	3500, "Pink", {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},
			{"B_Heli_Transport_01_Sand_F", 	3500, "Sand", {"\A3\Air_F_Exp\Heli_Transport_01\Data\Heli_Transport_01_ext01_sand_CO.paa","\A3\Air_F_Exp\Heli_Transport_01\Data\Heli_Transport_01_ext02_sand_CO.paa"};},
			{"B_Heli_Transport_01_Tropic_F", 3500, "Tropic", {"\A3\Air_F_Exp\Heli_Transport_01\Data\Heli_Transport_01_ext01_tropic_CO.paa","\A3\Air_F_Exp\Heli_Transport_01\Data\Heli_Transport_01_ext02_tropic_CO.paa"};},			
			{"B_Heli_Transport_01_camo_F", 	3500, "Green", {"\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_BLUFOR_CO.paa","\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext02_BLUFOR_CO.paa"};}
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// Mi-48 Kajman
	///////////////////////////////////////////////////////////////////////////////
	class Heli_Attack_02_base_F
	{
		skins[] = 
		{
			{"O_Heli_Attack_02_F", 	        3500, "CSAT",   {"A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body1_CO.paa","A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body2_CO.paa"};},
			{"O_Heli_Attack_02_Pink_F", 	3500, "Pink", {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"O_Heli_Attack_02_black_F", 	3500, "Black",  {"A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body1_black_CO.paa","A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body2_black_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// MV-22 armed
	///////////////////////////////////////////////////////////////////////////////
	class VTOL_01_armed_blue_F
	{
		skins[] = 
		{
			{"B_T_VTOL_01_armed_blue_F", 	3500, "Blue",   {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};},
			{"B_T_VTOL_01_armed_Pink_F", 	3500, "Pink",   {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"B_T_VTOL_01_armed_olive_F", 	3500, "Olive",  {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa"};}
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// MV-22 vehicle
	///////////////////////////////////////////////////////////////////////////////
	class VTOL_01_vehicle_F
	{
		skins[] = 
		{
			{"Exile_Plane_BlackfishVehicle", 	3500, "Blue",   {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};},
			{"Exile_Plane_BlackfishVehicle", 	3500, "Pink",   {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"Exile_Plane_BlackfishVehicle",   3500, "Olive",  {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MV-22 infantry
	///////////////////////////////////////////////////////////////////////////////
	class VTOL_01_infantry_F
	{
		skins[] = 
		{
			{"Exile_Plane_BlackfishInfantry", 	3500, "Blue",   {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};},
			{"Exile_Plane_BlackfishInfantry", 	3500, "Pink",   {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"Exile_Plane_BlackfishInfantry",    3500, "Olive",  {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Orca_CSAT", 		2700, "CSAT", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};},
			{"Exile_Chopper_Orca_Black", 		2700, "Black", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};},
			{"Exile_Chopper_Orca_Pink", 	    2700, "Pink",           {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"Exile_Chopper_Orca_Blue", 		2700, "Blue", 			{"\A3\Air_F\Heli_Light_02\Data\heli_light_02_ext_civilian_CO.paa"};},			
			{"Exile_Chopper_Orca_BlackCustom", 	2700, "Black Custom", 	{"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Orca armed
	///////////////////////////////////////////////////////////////////////////////
	class Heli_Light_02_base_F
	{
		skins[] = 
		{
			{"O_Heli_Light_02_F", 		            2700, "CSAT", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};},
			{"O_Heli_Light_02_Black_F", 		    2700, "Black", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};},
			{"O_Heli_Light_02_Pink_F", 	            2700, "Pink",           {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"O_Heli_Light_02_Blue_F", 		        2700, "Blue", 			{"\A3\Air_F\Heli_Light_02\Data\heli_light_02_ext_civilian_CO.paa"};},			
			{"O_Heli_Light_02_BlackCustom_F", 	    2700, "Black Custom", 	{"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"};}		
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_CSAT",		3000, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Pink", 	3000, "Pink",   {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"Exile_Chopper_Taru_Black",	3000, "BLACK", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Transport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	3000, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Transport_Pink",   3000, "Pink",   {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"Exile_Chopper_Taru_Transport_Black",	3000, "Black", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		3000, "CSAT",	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"};},
			{"Exile_Chopper_Taru_Covered_Pink", 	3000, "Pink",   {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"Exile_Chopper_Taru_Covered_Black",	3000, "Black",	{"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Abstract
	{	
		skins[] = 
		{			
			{"Exile_Car_Hatchback_Rusty1", 			200, "Rusty White",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"};},
			{"Exile_Car_Hatchback_Rusty2", 			200, "Rusty Red",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"};},
			{"Exile_Car_Hatchback_Rusty3", 			200, "Rusty Yellow",	{"\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"};},			
			{"Exile_Car_Hatchback_Beige", 			200, "Beige",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Hatchback_Green", 			200, "Green",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Hatchback_Blue", 			200, "Blue",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Hatchback_BlueCustom", 		200, "Blue Custom",		{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Hatchback_BeigeCustom", 	200, "Beige Custom",	{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Hatchback_Yellow", 			200, "Yellow",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"};},
			{"Exile_Car_Hatchback_White", 			200, "White",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_CO.paa"};},			
			{"Exile_Car_Hatchback_Grey", 			200, "Grey",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"};},
			{"Exile_Car_Hatchback_Black", 			200, "Black",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"};},
			{"Exile_Car_Hatchback_Dark", 			200, "Dark",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Zamak transport
	///////////////////////////////////////////////////////////////////////////////
	class Truck_02_transport_base_F
	{
		skins[] = 
		{
			{"O_Truck_02_transport_F", 				1600, "CSAT", 		{"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_OPFOR_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_OPFOR_co.paa"};},						
			{"I_Truck_02_transport_F", 				1600, "FIA",		{"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_INDP_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_INDP_co.paa"};},		
			{"C_Truck_02_transport_F", 				1600, "Civilian", 	{"\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"};}		
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// Zamak covered
	///////////////////////////////////////////////////////////////////////////////
	class Truck_02_base_F
	{
		skins[] = 
		{			
			{"O_Truck_02_covered_F", 				1600, "CSAT", 	    {"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_OPFOR_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_OPFOR_co.paa"};},		
			{"I_Truck_02_covered_F", 				1600, "FIA", 		{"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_INDP_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_INDP_co.paa"};},		
			{"C_Truck_02_covered_F", 				1600, "Civilian", 	{"\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"};}		
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Zamak box
	///////////////////////////////////////////////////////////////////////////////
	class Truck_02_box_base_F
	{
		skins[] = 
		{
			{"O_Truck_02_box_F", 			        1600, "CSAT", 	    {"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_OPFOR_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_repair_OPFOR_co.paa"};},
			{"I_Truck_02_box_F", 				    1600, "FIA", 		{"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_INDP_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_repair_INDP_co.paa"};},		
			{"C_Truck_02_box_F", 				    1600, "Civilian", 	{"\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_repair_co.paa"};}	
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// Zamak medical
	///////////////////////////////////////////////////////////////////////////////
	class Truck_02_medical_base_F
	{
		skins[] = 
		{
			{"O_Truck_02_medical_F", 				1600, "CSAT", 		{"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_OPFOR_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_OPFOR_co.paa"};},	
			{"I_Truck_02_medical_F", 				1600, "FIA", 		{"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_INDP_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_INDP_co.paa"};},
			{"C_Truck_02_medical_F", 				1600, "Civilian", 	{"\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"};}			
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Zamak fuel
	///////////////////////////////////////////////////////////////////////////////
	class Truck_02_fuel_base_F
	{
		skins[] = 
		{	
			{"O_Truck_02_fuel_F", 				    1600, "CSAT", 		{"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_OPFOR_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_fuel_OPFOR_co.paa"};},			
			{"I_Truck_02_fuel_F", 				    1600, "FIA",		{"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_INDP_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_fuel_INDP_co.paa"};},	
			{"C_Truck_02_fuel_F", 				    1600, "Civilian",	{"\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_fuel_co.paa"};}		
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// HEMMT transport
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HEMMT_Abstract
	{
		skins[] = 
		{
			//{"Exile_Car_HEMMT", 				1800, "NATO", 		{"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa"};},						
			//{"Exile_Car_HEMMT", 				1800, "Olive",		{"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa"};}
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// Tempest transport
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest_Abstract
	{
		skins[] = 
		{			
			{"Exile_Car_Tempest", 				1800, "CSAT", 	    {"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa"};},		
			{"Exile_Car_Tempest", 				1800, "Green Hex", 		{"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Tempest abgedeckt
	///////////////////////////////////////////////////////////////////////////////
	class Truck_03_base_F
	{
		skins[] = 
		{
			{"O_Truck_03_covered_F", 			        1800, "CSAT", 	    {"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cover_CO.paa"};},
			{"O_T_Truck_03_covered_ghex_F", 			1800, "Green Hex", 		{"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cover_ghex_CO.paa"};}
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// Tempest medical
	///////////////////////////////////////////////////////////////////////////////
	class Truck_03_medical_base_F
	{
		skins[] = 
		{
			{"B_Truck_01_medical_F", 				1800, "CSAT", 		{"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cover_CO.paa"};},	
			{"O_T_Truck_03_medical_ghex_F", 		1800, "Green Hex", 		{"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cover_ghex_CO.paa"};}		
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Tempest fuel
	///////////////////////////////////////////////////////////////////////////////
	class Truck_03_fuel_base_F
	{
		skins[] = 
		{	
			//{"B_Truck_01_fuel_F", 				    1800, "CSAT", 		{"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_fuel_CO.paa"};},			
			//{"O_T_Truck_03_fuel_ghex_F", 			1800, "Green Hex",		{"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_fuel_CO.paa"};}
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// Tempest repair
	///////////////////////////////////////////////////////////////////////////////
	class Truck_03_repair_base_F
	{
		skins[] = 
		{	
			//{"O_Truck_03_repair_F", 				    1800, "CSAT", 		{"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_CO.paa"};},			
			//{"O_T_Truck_03_repair_ghex_F", 				1800, "Green Hex",		{"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] = 
		{			
			{"Exile_Car_Hatchback_Sport_Red", 		200, "Red",		{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Blue", 		200, "Blue",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Orange", 	200, "Orange",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_White", 	200, "White",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Beige", 	200, "Beige",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Green", 	200, "Green",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Abstract
	{
		skins[] = 
		{		
			{"Exile_Car_Offroad_Rusty1", 		1000, "Rusty White",	{"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"};},
			{"Exile_Car_Offroad_Rusty2", 		1000, "Rusty Red",	{"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"};},
			{"Exile_Car_Offroad_Rusty3", 		1000, "Rusty Blue",	{"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"};},			
			{"Exile_Car_Offroad_Red", 			1000, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Beige", 		1000, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_White", 		1000, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Blue", 			1000, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed", 		1000, "Dark Red",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Offroad_Pink", 	        1000, "Pink",       {"#(rgb,8,8,3)color(1,0.08,0.57,1)"};},				
			{"Exile_Car_Offroad_BlueCustom", 	1000, "Blue Custom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla01", 	1400, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla02", 	1400, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla03", 	1400, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla04", 	1400, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla05", 	1400, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla06", 	1400, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla07", 	1400, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla08", 	1400, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla09", 	1400, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla10", 	1400, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla11", 	1400, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla12", 	1400, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed",		1400, "Exile Black", {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		1400, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		1400, "Exile Orange",{"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		1400, "Exile Pink",	{"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		1400, "Exile White",	{"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		1400, "Exile Yellow",{"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_LandRover_Red", 700, "Red",       {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"};},
			{"Exile_Car_LandRover_Urban", 700, "Urban",   {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"};},
			{"Exile_Car_LandRover_Green", 700, "Green",   {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Sand", 700, "Sand",     {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Desert", 700, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover (Ambulance)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Ambulance_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_LandRover_Ambulance_Green", 700, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Desert", 700, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Sand", 700, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Octavius
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Octavius_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Octavius_White", 500, "White", {"exile_psycho_Octavia\Data\car_body_co.paa"};},
			{"Exile_Car_Octavius_Black", 500, "Black", {"exile_psycho_Octavia\Data\car_body_bl_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Mohawk
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Mohawk_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Mohawk_FIA",   3500, "FIA", {"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa"};},
			{"Exile_Chopper_Mohawk_Pink",  3500, "Pink",   {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"Exile_Chopper_Mohawk_homan", 3500, "Homan",  {"A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_1_dahoman_co.paa","A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_2_dahoman_co.paa","A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_3_dahoman_co.paa"};},
			{"Exile_Chopper_Mohawk_ION",   3500, "ION", {"A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_1_ion_co.paa","A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_2_ion_co.paa","A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_3_ion_co.paa"};}			
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huey_Green", 1400, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Pink",  1400, "Pink",   {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"Exile_Chopper_Huey_Desert", 1400, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huey_Armed_Green", 1400, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Armed_Pink",  1400, "Pink",   {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"Exile_Chopper_Huey_Armed_Desert", 1400, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// AH ßß Blackfoot (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Heli_Attack_01_base_F
	{
		skins[] = 
		{
			{"B_Heli_Attack_01_Green_F",  1900, "Green", {"\a3\air_f_beta\heli_attack_01\data\heli_attack_01_co.paa"};},
			{"B_Heli_Attack_01_Pink_F",   1900, "Pink",   {"#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"B_Heli_Attack_01_Desert_F", 1900, "Black", {"#(argb,8,8,3)color(0,0,0,0.6)"};}
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// Ceasar BTT
	///////////////////////////////////////////////////////////////////////////////
	class C_Plane_Civil_01_F
	{
		skins[] = 
		{
			{"Exile_Plane_Ceasar",		750, "Racing (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		750, "Racing", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};},
			{"Exile_Plane_Ceasar",		750, "Red Line (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		750, "Tribal (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		750, "Tribal", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};},
			{"Exile_Plane_Ceasar",		750, "Blue Wave (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		750, "Blue Wave", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Armed_Rusty1", 		1000, "Rusty White",	{"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"};},
			{"Exile_Car_Offroad_Armed_Rusty2", 		1000, "Rusty Red",	{"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"};},
			{"Exile_Car_Offroad_Armed_Rusty3", 		1000, "Rusty Blue",	{"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"};},			
			{"Exile_Car_Offroad_Armed_Pink", 	    1000, "Pink",       {"#(rgb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Car_Offroad_Armed_Black",		1000, "Exile Black",	  {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"};},
			{"Exile_Car_Offroad_Armed_LightBlue",	1000, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"};},
			{"Exile_Car_Offroad_Armed_Orange",		1000, "Exile Orange",	  {"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"};},
			{"Exile_Car_Offroad_Armed_Pink",		1000, "Exile Pink",		  {"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"};},
			{"Exile_Car_Offroad_Armed_White",		1000, "Exile White",	  {"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"};},
			{"Exile_Car_Offroad_Armed_Yellow",		1000, "Exile Yellow",     {"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"};},			
			{"Exile_Car_Offroad_Armed_Guerilla01",	1000, "Guerilla 01", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla02",	1000, "Guerilla 02", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla03",	1000, "Guerilla 03", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla04",	1000, "Guerilla 04", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla05",	1000, "Guerilla 05", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla06",	1000, "Guerilla 06", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla07",	1000, "Guerilla 07", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla08",	1000, "Guerilla 08", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla09",	1000, "Guerilla 09", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla10",	1000, "Guerilla 10", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla11",	1000, "Guerilla 11", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla12",	1000, "Guerilla 12", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MB 4WD
	///////////////////////////////////////////////////////////////////////////////
	class C_Offroad_02_unarmed_orange_F
	{
		skins[] = 
		{
			{"Exile_Car_MB4WD",		900, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};},
			{"Exile_Car_MB4WD",		900, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"};},
			{"Exile_Car_MB4WD",		900, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"};},
			{"Exile_Car_MB4WD",		900, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"};},
			{"Exile_Car_MB4WD",		900, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};},
			{"Exile_Car_MB4WD",		900, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"};},
			{"Exile_Car_MB4WD", 	900, "Pink",    {"#(rgb,8,8,3)color(1,0.08,0.57,1)"};},				
			{"Exile_Car_MB4WD",		900, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"};}
		};
	};
	
	class I_C_Offroad_02_unarmed_F
	{
		skins[] = 
		{
			{"Exile_Car_MB4WDOpen",		900, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};},
			{"Exile_Car_MB4WDOpen",		900, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"};},
			{"Exile_Car_MB4WDOpen",		900, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"};},
			{"Exile_Car_MB4WDOpen",		900, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"};},
			{"Exile_Car_MB4WDOpen",		900, "Orange", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"};},
			{"Exile_Car_MB4WDOpen",		900, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"};},
			{"Exile_Car_MB4WDOpen", 	900, "Pink",    {"#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"Exile_Car_MB4WDOpen",		900, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"};},
			{"Exile_Car_MB4WDOpen",		900, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};}
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// Boat Transport
	///////////////////////////////////////////////////////////////////////////////
	class Boat_Transport_02_base_F
	{
		skins[] = 
		{
			{"C_Boat_Transport_02_F", 		    1100, "Blue",	   {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"};},
			{"O_G_Boat_Transport_02_F", 		1100, "Black",	   {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_CO.paa" };},
			{"B_G_Boat_Transport_02_pink_F", 	1100, "Pink",      {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};}		
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Repair_Rusty1", 		700, "Rusty White",	{"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"};},
			{"Exile_Car_Offroad_Repair_Rusty2", 		700, "Rusty Red",	{"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"};},
			{"Exile_Car_Offroad_Repair_Rusty3", 		700, "Rusty Blue",	{"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"};},			
			{"Exile_Car_Offroad_Repair_Civillian",		700, "Civillian",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Red",			700, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Beige",			700, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_White",			700, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Blue",			700, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_DarkRed",		700, "DarkRed",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Pink", 	        700, "Pink",        {"#(rgb,8,8,3)color(1,0.08,0.57,1)"};},		
			{"Exile_Car_Offroad_Repair_Black",		    700, "Exile Black",	  {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"};},
			{"Exile_Car_Offroad_Repair_LightBlue",	    700, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"};},
			{"Exile_Car_Offroad_Repair_Orange",		    700, "Exile Orange",	  {"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"};},
			{"Exile_Car_Offroad_Repair_Pink",		    700, "Exile Pink",		  {"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"};},
			{"Exile_Car_Offroad_Repair_White",		    700, "Exile White",	  {"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"};},
			{"Exile_Car_Offroad_Repair_Yellow",		    700, "Exile Yellow",     {"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"};},			
			{"Exile_Car_Offroad_Repair_BlueCustom",		700, "BlueCustom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla01",		900, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla02",		900, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla03",		900, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla04",		900, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla05",		900, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla06",		900, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla07",		900, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla08",		900, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla09",		900, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla10",		900, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla11",		900, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla12",		900, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad Polizei
	///////////////////////////////////////////////////////////////////////////////
	class Offroad_01_civil_base_F
	{
		skins[] = 
		{		
			{"B_GEN_Offroad_01_gen_Rusty1_F", 		1000, "Rusty White",	{"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"};},
			{"B_GEN_Offroad_01_gen_Rusty2_F", 		1000, "Rusty Red",	{"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"};},
			{"B_GEN_Offroad_01_gen_Rusty3_F", 		1000, "Rusty Blue",	{"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"};},
			{"B_GEN_Offroad_01_gen_GEN_F", 			1000, "GEN",			{"\A3\Soft_F_Exp\Offroad_01\Data\Offroad_01_ext_gen_CO.paa","\A3\Soft_F_Exp\Offroad_01\Data\Offroad_01_ext_gen_CO.paa"};},			
			{"B_GEN_Offroad_01_gen_Red_F", 			1000, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Beige_F", 		1000, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"B_GEN_Offroad_01_gen_White_F", 		1000, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Blue_F", 		1000, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"B_GEN_Offroad_01_gen_DarkRed_F", 		1000, "Dark Red",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Pink_F", 	    1000, "Pink",       {"#(rgb,8,8,3)color(1,0.08,0.57,1)"};},				
			{"B_GEN_Offroad_01_gen_BlueCustom_F", 	1000, "Blue Custom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla01_F", 	1400, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla02_F", 	1400, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla03_F", 	1400, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla04_F", 	1400, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla05_F", 	1400, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla06_F", 	1400, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla07_F", 	1400, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla08_F", 	1400, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla09_F", 	1400, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla10_F", 	1400, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla11_F", 	1400, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla12_F", 	1400, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Blacks_F",		1400, "Exile Black", {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"};},
			{"B_GEN_Offroad_01_gen_Light_F",		1400, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"};},
			{"B_GEN_Offroad_01_gen_Pink_F",		    1400, "Exile Orange",{"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"};},
			{"B_GEN_Offroad_01_gen_F_DarkRed",		1400, "Exile Pink",	{"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"};},
			{"B_GEN_Offroad_01_gen_Whitee_F",		1400, "Exile White",	{"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"};},
			{"B_GEN_Offroad_01_gen_Yellow_F",		1400, "Exile Yellow",{"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"};}			
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUV_Red", 		500, "Red",					{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"};},
			{"Exile_Car_SUV_Black", 	600, "Black",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"};},
			{"Exile_Car_SUV_Grey", 		500, "Grey",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"};},
			{"Exile_Car_SUV_Orange", 	500, "Orange",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"};},
			{"Exile_Car_SUV_Rusty1", 	550, "Rusty White",	        {"\exile_assets\model\RTV\Exile_Car_Suv_03_co.paa"};},
			{"Exile_Car_SUV_Rusty2", 	550, "Rusty Red",	        {"\exile_assets\model\RTV\Exile_Car_Suv_02_co.paa"};},
			{"Exile_Car_SUV_Rusty3", 	550, "Rusty Black",	        {"\exile_assets\model\RTV\Exile_Car_Suv_01_co.paa"};},						
			{"Exile_Car_SUV_Black", 	600, "Snow Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Snow_co.paa"};},
			{"Exile_Car_SUV_Black", 	600, "Leaf Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Light_co.paa"};},
			{"Exile_Car_SUV_Black", 	600, "Leaf Camo (Dark)",	{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Dark_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV XL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUVXL_Black", 700, "Black", {"Exile_psycho_SUV_a3\Data\suv_body_co.paa"};},
			{"Exile_Car_SUVXL_White", 700, "White", {"Exile_psycho_SUV_a3\Data\textures\suv_body_white_co.paa"};},
			{"Exile_Car_SUVXL_Silver", 700, "Silver", {"Exile_psycho_SUV_a3\Data\textures\suv_body_silver_co.paa"};},			
			{"Exile_Car_SUVXL_Blue", 700, "Blue",   {"Exile_psycho_SUV_a3\Data\textures\suv_body_bluewhite.paa"};}			
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV Armed
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Armed_Abstract
	{
		skins[] = 
		{
			//{"Exile_Car_SUV_Armed_Black", 750, "Black", {"\Exile_psycho_SuvArm_a3\data\armoredsuv_body_co.paa"};}			
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// Van 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Black",			750, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_White",			750, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Red",			750, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Olive",			750, "Olive",		{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"};},
			{"Exile_Car_Van_Brown",			750, "Brown",		{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"};},			
			{"Exile_Car_Van_Guerilla01",	900, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Guerilla02",	900, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Guerilla03",	900, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Guerilla04",	900, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Guerilla05",	900, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Guerilla06",	900, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Guerilla07",	900, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Guerilla08",	900, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Box_Black",				750, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_White",				750, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Red",				750, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Olive",			    750, "Olive",		{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"};},
			{"Exile_Car_Van_Box_Brown",			    750, "Brown",		{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"};},			
			{"Exile_Car_Van_Box_Guerilla01",		900, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla02",		900, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla03",		900, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla04",		900, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla05",		900, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla06",		900, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla07",		900, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla08",		900, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Fuel_Black",			750, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_White",			750, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Red",				750, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla01",		900, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla02",		900, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla03",		900, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ikarus_Blue", 		1000, "Blue",	{"Exile_psycho_Ikarus\Data\bus_exterior_co.paa"};},
			{"Exile_Car_Ikarus_Red", 		1000, "Red",	{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};},
			{"Exile_Car_Ikarus_Party", 		1500, "Party",	{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Open_Blue",			1200, "Blue",		{"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Yellow",			1200, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Open_Worker",			1200, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Military",		1200, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Covered_Blue",			1200, "Blue",		{"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Yellow",		1200, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Covered_Worker",		1200, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Military",		1200, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Lada_Green", 		200, "Green",	{"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"};},
			{"Exile_Car_Lada_Taxi", 		200, "Taxi",	{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Red", 			200, "Red",		{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Hipster", 		200, "Hipster",	{"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Volha_Blue", 		200, "Blue",	{"Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"};},
			{"Exile_Car_Volha_White", 		200, "White",	{"Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"};},
			{"Exile_Car_Volha_Black",		200, "Black",	{"Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Strider
	///////////////////////////////////////////////////////////////////////////////
	class MRAP_03_base_F
	{	
		skins[] = 
		{
			{"I_MRAP_03_FIA_F", 	2200, "FIA",	    {"\a3\soft_f_beta\mrap_03\data\mrap_03_ext_indp_co.paa","\a3\data_f\vehicles\turret_indp_co.paa"};},
			{"I_MRAP_03_NATO_F", 	2200, "NATO",	    {"\a3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa","\a3\data_f\vehicles\turret_opfor_co.paa"};},			
			{"I_MRAP_03_Black_F", 	2200, "Black",	    {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},			
			{"I_MRAP_03_Pink_F", 	2200, "Pink",	    {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"I_MRAP_03_Tan_F", 	2200, "Tan",	    {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};}	
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ifrit
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ifrit", 	2000, "CSAT",	    {"\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa","\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa"};},
			{"Exile_Car_Ifrit", 	2000, "Green Hex",	    {"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa","\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_LSV_01_unarmed_black_F
	{
		skins[] = 
		{
			{"Exile_Car_ProwlerUnarmed",		1600, "Olive", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed",		1600, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed",		1600, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed", 	    1600, "Black",	    {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"};}			
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Light)
	///////////////////////////////////////////////////////////////////////////////
	class B_CTRG_LSV_01_light_F
	{
		skins[] = 
		{
			{"Exile_Car_ProwlerLight",		1500, "Black", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"};},
			{"Exile_Car_ProwlerLight",		1500, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerLight",		1500, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};},
			{"Exile_Car_ProwlerLight", 	    1500, "Olive",	    {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};}			
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// Prowler armed
	///////////////////////////////////////////////////////////////////////////////
	class LSV_01_armed_base_F
	{	
		skins[] = 
		{
			{"B_LSV_01_armed_olive_F", 	1600, "Olive",	    {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"B_LSV_01_armed_sand_F", 	1600, "Sand",	    {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};},
			{"B_LSV_01_armed_dazzle_F", 1600, "Dazzle",	    {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},			
			{"B_LSV_01_armed_black_F", 	1600, "Black",	    {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"};}			
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// Qilin armed
	///////////////////////////////////////////////////////////////////////////////
	class O_T_LSV_02_armed_arid_F
	{	
		skins[] = 
		{
			{"O_T_LSV_02_armed_arid_F",		1400, "Arid", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"};},
			{"O_T_LSV_02_armed_black_F",    1400, "Black", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};},			
			{"O_T_LSV_02_armed_hex_F", 	    1400, "Green Hex",	    {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"};}
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	//  Y-32 XI infantry
	///////////////////////////////////////////////////////////////////////////////
	class VTOL_02_infantry_base_F
	{
		skins[] = 
		{
			{"O_T_VTOL_02_infantry_grey_F", 	3500, "Grey",   {"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_CO.paa"};},
			{"O_T_VTOL_02_infantry_grey_F",      3500, "HEX",    {"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_bhex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_bhex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_bhex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_bhex_CO.paa"};},
			{"O_T_VTOL_02_infantry_grey_F", 	3500, "Pink",   {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"O_T_VTOL_02_infantry_grey_F",     3500, "Green Hex",   {"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_ghex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_ghex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_ghex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_ghex_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	//  Y-32 XI vehicle
	///////////////////////////////////////////////////////////////////////////////
	class VTOL_02_vehicle_base_F
	{
		skins[] = 
		{
			{"O_T_VTOL_02_vehicle_grey_F", 	3500, "Grey",   {"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_CO.paa"};},
			{"O_T_VTOL_02_vehicle_grey_F",   3500, "HEX",    {"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_bhex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_bhex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_bhex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_bhex_CO.paa"};},
			{"O_T_VTOL_02_vehicle_grey_F", 	3500, "Pink",   {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"O_T_VTOL_02_vehicle_grey_F",  3500, "Green Hex",   {"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_ghex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_ghex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_ghex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_ghex_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Qilin (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class O_T_LSV_02_unarmed_black_F
	{
		skins[] = 
		{
			{"Exile_Car_QilinUnarmed",		1450, "Arid", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"};},
			{"Exile_Car_QilinUnarmed",		1450, "Black", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};},			
			{"Exile_Car_QilinUnarmed",		1450, "Green Hex", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// HUNTER
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter_Abstract
	{
		skins[] = 
		{			
			{"Exile_Car_Hunter",		2000, "Exile White Edition",	{"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Snow_Back_co.paa"};},
			{"Exile_Car_Hunter",		2000, "Exile Hex",				{"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};},
			{"Exile_Car_Hunter",		2000, "NATO",				    {"\A3\soft_F\MRAP_01\data\MRAP_01_base_CO.paa","\A3\soft_F\MRAP_01\data\MRAP_01_adds_CO.paa"};},
			{"Exile_Car_Hunter", 		2000, "Pink",	                {"#(rgb,8,8,3)color(1,0.08,0.57,1)"};},	
			//{"Exile_Car_Hunter", 		2000, "Olive",	                {"\A3\soft_F\MRAP_01\data\MRAP_01_base_CO.paa","\A3\soft_F\MRAP_01\data\MRAP_01_adds_CO.paa"};},			
			{"Exile_Car_Hunter",		2000, "Exile Black",			{"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// HMMWV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HMMWV_M2_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_M2_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_M2_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_M134_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_M134_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_M134_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_MEV_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_MEV_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_cm.paa"};},
			{"Exile_Car_HMMWV_MEV_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_cm.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_UNA_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_UNA_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_UNA_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// BTR40
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BTR40_MG_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_BTR40_MG_Green",		1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"};},
			{"Exile_Car_BTR40_MG_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"};}
		};
	};
	
	class Exile_Car_BTR40_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_BTR40_Green",			1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"};},
			{"Exile_Car_BTR40_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Golf
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Golf_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Golf_Red",				1000, "Red",	{"exile_psycho_VWGolf\data\vwgolf_body_co.paa"};},
			{"Exile_Car_Golf_Black",			1000, "Black",	{"exile_psycho_VWGolf\data\texture\black_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// AN-2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_AN2_Abstract
	{
		skins[] = 
		{
			{"Exile_Plane_AN2_Green", 700, "Green", {"Exile_psycho_An2\data\an2_1_co.paa","Exile_psycho_An2\data\an2_2_co.paa","Exile_psycho_An2\data\an2_wings_co.paa"};},
			{"Exile_Plane_AN2_White", 700, "Red, White & Blue", {"Exile_psycho_An2\data\an2_1_a_co.paa","Exile_psycho_An2\data\an2_2_a_co.paa","Exile_psycho_An2\data\an2_wings_a_co.paa"};},
			{"Exile_Plane_AN2_Stripe", 700, "Green Stripe", {"Exile_psycho_An2\data\an2_1_b_co.paa","Exile_psycho_An2\data\an2_2_b_co.paa","Exile_psycho_An2\data\an2_wings_b_co.paa"};}
		};
	};	
};
class CfgVehicleTransport 
{
	class Exile_Container_SupplyBox
	{
		vehicles[] = {"Exile_Car_Van_Abstract", "Exile_Car_Offroad_Abstract", "B_GEN_Offroad_01_gen_F", "Exile_Car_Zamak_Abstract", "Exile_Car_HEMMT_Abstract", "Exile_Car_Tempest_Abstract", "I_Truck_02_transport_F", "O_Truck_02_transport_F", "C_Truck_02_transport_F"};

		class Exile_Car_Van_Abstract
		{
			attachPosition[] = {0, -1.1, 0.2};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0, -4.4};
		};

		class Exile_Car_Offroad_Abstract
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4}; 
			detachPosition[] = {0, -4};
		};

		class B_GEN_Offroad_01_gen_F
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4}; 
			detachPosition[] = {0, -4};
		};		
		
		class Exile_Car_Zamak_Abstract
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};

		class Exile_Car_HEMMT_Abstract
		{
			attachPosition[] = {0.05, -0.1, 0.3};
			cargoIndizes[] = {1, 2, 8, 9}; 
			detachPosition[] = {0.05, -6.1};
		};

		class Exile_Car_Tempest_Abstract
		{
            attachPosition[] = {0, -4, 0.4};
            cargoIndizes[] = {1, 6, 7, 9}; 
            detachPosition[] = {0, -6, -1.4};
		};

		class I_Truck_02_transport_F
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};		
		
		class O_Truck_02_transport_F
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};

		class C_Truck_02_transport_F
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};		
	};
};

class CfgVon
{
	// self explanitory isnt it
	class global
	{
		id = 0;
		text = 0;
		von = 0;
	};

	class side
	{
		id = 1;
		text = 1;
		von = 0;
	};

	class command
	{
		id = 2;
		text = 0;
		von = 0;
	};

	class group

	{
		id = 3;
		text = 1;
		von = 1;
	};

	class vehicle
	{
		id = 4;
		text = 1;
		von = 1;
	};

	class direct
	{
		id = 5;
		text = 1;
		von = 1;
	};
};

class CfgXM8
{
	extraApps[] = {"ExAd_test","ExAd_Rules","ExAd_CHVD","ExAd_Bike","ExAd_Scratchie","ExAd_ScratchieBuy","ExAd_ScratchiePrize","ExAd_PlayerScan","ExAd_Selfie","ExAd_Chemlight","BRAmaRecipes"};
	
	class ExAd_test 
	{
		controlID = 50000;					//IDC:50000 -> 50015 || These need to be unique and out of range from each other 
		title = "test";		
		logo = "ExadClient\XM8\Apps\rules\rules.paa";	
		onLoad = "ExAdClient\XM8\Apps\test\onLoad.sqf";
	};	
	class ExAd_Rules 
	{
		controlID = 50100;					//IDC:50100 -> 50102 || These need to be unique and out of range from each other
		title = "Server Rules";		
		logo = "ExadClient\XM8\Apps\rules\rules.paa";	
		onLoad = "ExAdClient\XM8\Apps\rules\onLoad.sqf";
	};	
	class ExAd_CHVD 
	{
		controlID = 50200;					//IDC:50200 -> 50250 || These need to be unique and out of range from each other
		title = "Sichtweiten Settings";		
		config = "ExadClient\XM8\Apps\CHVD\config.sqf";
		logo = "ExadClient\XM8\Apps\CHVD\viewlogo.paa";
		onLoad = "ExAdClient\XM8\Apps\CHVD\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\CHVD\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\CHVD\onClose.sqf";
	};
	class ExAd_Bike
	{
		title = "Deploy Bike";
		logo = "ExadClient\XM8\Apps\DeployVehicle\bike.paa";		
		config = "ExadClient\XM8\Apps\DeployVehicle\config.sqf";
		bambiState = 1;
		vehicleClass = "Exile_Bike_OldBike";
		recipe[] = {{"Exile_Item_ToiletPaper",1}};
		packable = 0;
		autoCleanUp = 1;
		quickFunction = "['ExAd_Bike'] call ExAd_XM8_DV_fnc_spawnVehicle";
	};		
	class ExAd_Scratchie 
	{
		controlID = 50400;					//IDC:50100 -> 50102 || These need to be unique and out of range from each other
		logo = "ExadClient\XM8\Apps\Scratchie\scratchie.paa";	
		onLoad = "ExAdClient\XM8\Apps\Scratchie\onLoad.sqf";
	};
	class ExAd_ScratchieBuy 
	{
		controlID = 50500;					//IDC:50100 -> 50102 || These need to be unique and out of range from each other
		title = "scratchcard Acheter";		
		logo = "ExadClient\XM8\Apps\ScratchieBuy\scratchie-buy.paa";		
		onLoad = "ExAdClient\XM8\Apps\ScratchieBuy\onLoad.sqf";
	};
	class ExAd_ScratchiePrize 
	{
		controlID = 50600;					//IDC:50100 -> 50102 || These need to be unique and out of range from each other
		title = "obtenir le prix";		
		logo = "ExadClient\XM8\Apps\ScratchiePrize\scratchie-prize.paa";		
		onLoad = "ExAdClient\XM8\Apps\ScratchiePrize\onLoad.sqf";
	};
	class ExAd_PlayerScan 
	{
		controlID = 50700;					//IDC:50100 -> 50102 || These need to be unique and out of range from each other
		title = "Player Scan";		
		logo = "ExadClient\XM8\Apps\playerScan\radar.paa";	
		onLoad = "ExAdClient\XM8\Apps\playerScan\onLoad.sqf";
	};
	class ExAd_Selfie 
	{
		controlID = 50800;					//IDC:50100 -> 50102 || These need to be unique and out of range from each other
		title = "Selfie";			
		logo = "ExadClient\XM8\Apps\selfie\selfie.paa";		
		onLoad = "ExAdClient\XM8\Apps\selfie\onLoad.sqf";

	};
	class ExAd_Chemlight 
	{
		controlID = 50900;					//IDC:50100 -> 50102 || These need to be unique and out of range from each other
		title = "Attach light";			
		logo = "ExAdClient\XM8\Apps\AttachChemApp\chemlight.paa";		
		onLoad = "ExAdClient\XM8\Apps\AttachChemApp\onLoad.sqf";
	};
	class BRAmaRecipes 
	{
		controlID = 107000;
		title = "recettes";		
		logo = "ExAdClient\XM8\Apps\BRAmaRecipes\BRAma.paa";
		config = "ExAdClient\XM8\Apps\BRAmaRecipes\config.sqf";
		onLoad = "ExAdClient\XM8\Apps\BRAmaRecipes\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\BRAmaRecipes\onOpen.sqf";
	};	
}; 

class SpawnVehicleItems{

	class WorldVehicles{

		vehicleItemsAllowed = 1;

		maximumItemsPerVehicle = 4;

		allowedItems[] = {
			"Exile_Item_ToiletPaper",
			"Exile_Item_PlasticBottleEmpty",
            "Exile_Item_Bandage",			
			"Exile_Item_PlasticBottleDirtyWater",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",			
			"Exile_Item_PlasticBottleSaltWater",
			"Chemlight_blue",
			"Chemlight_green",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_Wrench",
			"Chemlight_red",
			"Exile_Item_MountainDupe",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_ZipTie",
			"Exile_Item_Sand",
			"Exile_Item_Cement",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",			
			"Exile_Item_SeedAstics",
			"Exile_Item_Rope",
			"SmokeShellOrange",						
			"Exile_Item_DsNuts",
			"SmokeShellPurple",			
            "Exile_Item_LightBulb",
			"UGL_FlareGreen_F",
			"Exile_Item_Magazine01",
			"Exile_Item_Magazine02",
			"Exile_Item_Magazine03",
			"Exile_Item_Magazine04",
            "Exile_Item_RubberDuck",			
			"UGL_FlareRed_F",
            "Exile_Item_CockONut",
			"Exile_Item_Heatpack",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",			
			"Exile_Item_Raisins",
			"Exile_Item_Moobar",
			"Exile_Item_InstantCoffee",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"Exile_Item_CarWheel",
			"SmokeShellRed",
			"SmokeShellYellow",			
			"Exile_Item_Can_Empty"
		};
	};
};
