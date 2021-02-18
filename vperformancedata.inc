#if defined __VPERFORMANCE_INC__
#endinput
#endif
#define __VPERFORMANCE_INC__

// ------------------------------------------------------------------------- 

static enum E_PERFORMANCE_DATA
{
	Float:e_pd_MaxVelocity,
	e_pd_MaxVelocityTime,
	e_pd_AccelTime
};

// -------------------------------------------------------------------------

static stock Float:VEHDATA_HighestVelocity = 1.229581;
static stock VEHDATA_HighestVelocityID = 411;
static stock VEHDATA_FastestAccel = 1915;
static stock VEHDATA_FastestAccelID = 510;
static stock VEHDATA_SlowestAccel = 15475;
static stock VEHDATA_SlowestAccelID = 423;

// -----

static stock VEHDATA_PerformanceData[212][E_PERFORMANCE_DATA] =
{
	{0.875908, 12195, 3635}, // 400 Landstalker
	{0.815387, 15621, 5005}, // 401 Bravura
	{1.034803, 12170, 2770}, // 402 Buffalo
	{0.609040, 10665, 7370}, // 403 Linerunner
	{0.736943, 14476, 6636}, // 404 Perrenial
	{0.909223, 12786, 3726}, // 405 Sentinel
	{0.612371, 8961, 6025}, // 406 Dumper
	{0.822802, 10870, 3980}, // 407 Firetruck
	{0.554518, 11220, 9740}, // 408 Trashmaster
	{0.876887, 15555, 4550}, // 409 Stretch
	{0.719703, 13031, 6226}, // 410 Manana
	{1.229581, 13581, 2475}, // 411 Infernus
	{0.935835, 13081, 3440}, // 412 Voodoo
	{0.611536, 13515, 9195}, // 413 Pony
	{0.586143, 11995, 9290}, // 414 Mule
	{1.066856, 11940, 2640}, // 415 Cheetah
	{0.854393, 11961, 4035}, // 416 Ambulance
	{0.000000, 0, 0}, // 417 Leviathan
	{0.640806, 14691, 9116}, // 418 Moonbeam
	{0.827593, 14606, 5075}, // 419 Esperanto
	{0.804978, 13771, 5295}, // 420 Taxi
	{0.852928, 13331, 4440}, // 421 Washington
	{0.776885, 13455, 5520}, // 422 Bobcat
	{0.547306, 15475, 15475}, // 423 Mr Whoopee
	{0.750999, 9241, 3666}, // 424 BF Injection
	{0.000000, 0, 0}, // 425 Hunter
	{0.962557, 14321, 3770}, // 426 Premier
	{0.918262, 15691, 4650}, // 427 Enforcer
	{0.870083, 19991, 6725}, // 428 Securicar
	{1.119022, 11436, 2325}, // 429 Banshee
	{0.000000, 0, 0}, // 430 Predator
	{0.723429, 19096, 9551}, // 431 Bus
	{0.523204, 12821, 12821}, // 432 Rhino
	{0.613053, 12001, 8250}, // 433 Barracks
	{0.926614, 10881, 2965}, // 434 Hotknife
	{0.000000, 0, 0}, // 435 Trailer 1
	{0.827654, 14601, 5160}, // 436 Previon
	{0.875585, 15626, 4940}, // 437 Coach
	{0.791898, 10930, 4065}, // 438 Cabbie
	{0.935846, 13050, 3550}, // 439 Stallion
	{0.755554, 14180, 6260}, // 440 Rumpo
	{0.000000, 0, 0}, // 441 RC Bandit
	{0.772934, 15926, 6640}, // 442 Romero
	{0.700580, 16625, 8470}, // 443 Packer
	{0.612946, 5470, 3660}, // 444 Monster
	{0.909036, 13376, 3960}, // 445 Admiral
	{0.000000, 0, 0}, // 446 Squalo
	{0.000000, 0, 0}, // 447 Seasparrow
	{0.579028, 15061, 11540}, // 448 Pizzaboy
	{0.000000, 0, 0}, // 449 Tram
	{0.000000, 0, 0}, // 450 Trailer 2
	{1.073585, 11185, 2115}, // 451 Turismo
	{0.000000, 0, 0}, // 452 Speeder
	{0.000000, 0, 0}, // 453 Reefer
	{0.000000, 0, 0}, // 454 Tropic
	{0.874490, 17615, 6675}, // 455 Flatbed
	{0.587360, 14955, 11540}, // 456 Yankee
	{0.527437, 12686, 12686}, // 457 Caddy
	{0.873023, 14436, 4595}, // 458 Solair
	{0.755479, 15881, 6390}, // 459 Berkley's RC Van
	{0.000000, 0, 0}, // 460 Skimmer
	{0.820874, 10800, 3000}, // 461 PCJ-600
	{0.581103, 15440, 11590}, // 462 Faggio
	{0.716346, 11160, 4610}, // 463 Freeway
	{0.000000, 0, 0}, // 464 RC Baron
	{0.000000, 0, 0}, // 465 RC Raider
	{0.815816, 12202, 4286}, // 466 Glendale
	{0.779496, 15231, 6080}, // 467 Oceanic
	{0.742711, 10436, 3551}, // 468 Sanchez
	{0.000000, 0, 0}, // 469 Sparrow
	{0.870485, 12761, 4215}, // 470 Patriot
	{0.612039, 7950, 4985}, // 471 Quad
	{0.000000, 0, 0}, // 472 Coastguard
	{0.000000, 0, 0}, // 473 Dinghy
	{0.827583, 14045, 4630}, // 474 Hermes
	{0.959782, 12966, 3351}, // 475 Sabre
	{0.000000, 0, 0}, // 476 Rustler
	{1.034757, 12346, 2950}, // 477 ZR-350
	{0.652687, 15431, 9115}, // 478 Walton
	{0.776807, 15271, 5526}, // 479 Regina
	{1.022433, 11751, 2815}, // 480 Comet
	{0.535497, 12336, 12336}, // 481 BMX
	{0.869315, 12665, 4185}, // 482 Burrito
	{0.680858, 14705, 8125}, // 483 Camper
	{0.000000, 0, 0}, // 484 Marquis
	{0.551401, 10750, 9395}, // 485 Baggage
	{0.355825, 15115, 15115}, // 486 Dozer
	{0.000000, 0, 0}, // 487 Maverick
	{0.000000, 0, 0}, // 488 News Chopper
	{0.774316, 12330, 4985}, // 489 Rancher
	{0.870423, 12881, 4036}, // 490 FBI Rancher
	{0.827551, 15396, 5510}, // 491 Virgo
	{0.779605, 12655, 4405}, // 492 Greenwood
	{0.000000, 0, 0}, // 493 Jetmax
	{1.192065, 14606, 2700}, // 494 Hotring
	{0.979035, 12040, 2980}, // 495 Sandking
	{0.902689, 11625, 3465}, // 496 Blista Compact
	{0.000000, 0, 0}, // 497 Police Maverick
	{0.598025, 14165, 10305}, // 498 Boxville
	{0.682051, 15481, 7690}, // 499 Benson
	{0.779980, 11575, 4705}, // 500 Mesa
	{0.000000, 0, 0}, // 501 RC Goblin
	{1.191972, 14681, 2745}, // 502 Hotring Racer A
	{1.191876, 14426, 2640}, // 503 Hotring Racer B
	{0.959909, 12820, 3330}, // 504 Bloodring Banger
	{0.774340, 12535, 4920}, // 505 Rancher
	{0.994557, 12435, 3030}, // 506 Super GT
	{0.921069, 14875, 4220}, // 507 Elegant
	{0.598017, 14175, 10315}, // 508 Journey
	{0.579079, 13931, 3070}, // 509 Bike
	{0.720619, 15950, 1915}, // 510 Mountain Bike
	{0.000000, 0, 0}, // 511 Beagle
	{0.000000, 0, 0}, // 512 Cropdust
	{0.000000, 0, 0}, // 513 Stunt
	{0.667963, 8145, 4645}, // 514 Tanker
	{0.789177, 10240, 4500}, // 515 Roadtrain
	{0.872977, 14251, 4645}, // 516 Nebula
	{0.873040, 13156, 4191}, // 517 Majestic
	{0.911790, 13491, 4090}, // 518 Buccaneer
	{0.000000, 0, 0}, // 519 Shamal
	{0.000000, 0, 0}, // 520 Hydra
	{0.815841, 10440, 3018}, // 521 FCR-900
	{0.918026, 10683, 2084}, // 522 NRG-500
	{0.769572, 9874, 3195}, // 523 HPV1000
	{0.722369, 11288, 5865}, // 524 Cement Truck
	{0.890572, 13917, 4522}, // 525 Tow Truck
	{0.875694, 14631, 4502}, // 526 Fortune
	{0.827666, 12620, 3944}, // 527 Cadrona
	{0.978670, 14424, 3817}, // 528 FBI Truck
	{0.827553, 15179, 5387}, // 529 Willard
	{0.334522, 5411, 5411}, // 530 Forklift
	{0.389836, 9751, 9751}, // 531 Tractor
	{0.610513, 14647, 10809}, // 532 Combine
	{0.926678, 12702, 3766}, // 533 Feltzer
	{0.935801, 12981, 3476}, // 534 Remington
	{0.876388, 8599, 2943}, // 535 Slamvan
	{0.959851, 13026, 3398}, // 536 Blade
	{0.000000, 0, 0}, // 537 Freight
	{0.000000, 0, 0}, // 538 Streak
	{0.000000, 0, 0}, // 539 Vortex
	{0.827575, 15009, 4937}, // 540 Vincent
	{1.126929, 12950, 2590}, // 541 Bullet
	{0.911854, 12622, 3758}, // 542 Clover
	{0.837284, 12298, 4404}, // 543 Sadler
	{0.822791, 10548, 3782}, // 544 Firetruck LA
	{0.815819, 12327, 4520}, // 545 Hustler
	{0.827453, 15510, 5417}, // 546 Intruder
	{0.791639, 14219, 5291}, // 547 Primo
	{0.000000, 0, 0}, // 548 Cargobob
	{0.851945, 11830, 3893}, // 549 Tampa
	{0.803501, 13735, 4439}, // 550 Sunrise
	{0.873035, 12543, 3611}, // 551 Merit
	{0.671603, 12590, 6906}, // 552 Utility
	{0.000000, 0, 0}, // 553 Nevada
	{0.798714, 11658, 4424}, // 554 Yosemite
	{0.877313, 10856, 3730}, // 555 Windsor
	{0.613131, 5475, 3668}, // 556 Monster A
	{0.612951, 5474, 3561}, // 557 Monster B
	{0.866271, 12868, 3613}, // 558 Uranus
	{0.986711, 12117, 3196}, // 559 Jester
	{0.938709, 10389, 2487}, // 560 Sultan
	{0.854408, 13980, 4640}, // 561 Stratum
	{0.986657, 11449, 2754}, // 562 Elegy
	{0.000000, 0, 0}, // 563 Raindance
	{0.000000, 0, 0}, // 564 RC Tiger
	{0.914385, 11784, 3009}, // 565 Flash
	{0.887965, 12402, 3907}, // 566 Tahoma
	{0.959812, 12847, 3335}, // 567 Savanna
	{0.811156, 8104, 2786}, // 568 Bandito
	{0.000000, 0, 0}, // 569 Freight Flat
	{0.000000, 0, 0}, // 570 Streak Carriage
	{0.516982, 8790, 8790}, // 571 Kart
	{0.333981, 8864, 8864}, // 572 Mower
	{0.612884, 6180, 4259}, // 573 Duneride
	{0.333968, 8969, 8969}, // 574 Sweeper
	{0.875636, 14208, 4487}, // 575 Broadway
	{0.875707, 14529, 4564}, // 576 Tornado
	{0.000000, 0, 0}, // 577 AT-400
	{0.722379, 11431, 5984}, // 578 DFT-30
	{0.875967, 13132, 4441}, // 579 Huntley
	{0.849218, 12184, 4273}, // 580 Stafford
	{0.773352, 10228, 3244}, // 581 BF-400
	{0.755445, 15935, 6426}, // 582 Newsvan
	{0.474141, 12072, 12072}, // 583 Tug
	{0.000000, 0, 0}, // 584 Trailer 3
	{0.849077, 14140, 5004}, // 585 Emperor
	{0.724054, 11648, 4442}, // 586 Wayfarer
	{0.914640, 12357, 3400}, // 587 Euros
	{0.598155, 14158, 10321}, // 588 Hotdog
	{0.902652, 10753, 3403}, // 589 Club
	{0.000000, 0, 0}, // 590 Freight Carriage
	{0.000000, 0, 0}, // 591 Trailer 3
	{0.000000, 0, 0}, // 592 Andromada
	{0.000000, 0, 0}, // 593 Dodo
	{0.000000, 0, 0}, // 594 RC Cam
	{0.000000, 0, 0}, // 595 Launch
	{0.974608, 13090, 3374}, // 596 Police Car (LSPD)
	{0.974642, 12906, 3294}, // 597 Police Car (SFPD)
	{0.974431, 13039, 3364}, // 598 Police Car (LVPD)
	{0.876248, 10637, 3390}, // 599 Police Ranger
	{0.837116, 12228, 4420}, // 600 Picador
	{0.612195, 9114, 6317}, // 601 S.W.A.T. Van
	{0.938522, 13133, 3507}, // 602 Alpha
	{0.950679, 12180, 3273}, // 603 Phoenix
	{0.815828, 12180, 4234}, // 604 Glendale
	{0.837068, 12202, 4422}, // 605 Sadler
	{0.000000, 0, 0}, // 606 Luggage Trailer A
	{0.000000, 0, 0}, // 607 Luggage Trailer B
	{0.000000, 0, 0}, // 608 Stair Trailer
	{0.598025, 14081, 10254}, // 609 Boxville
	{0.000000, 0, 0}, // 610 Farm Plow
	{0.000000, 0, 0} // 611 Utility Trailer
};

// -------------------------------------------------------------------------


stock GetVehiclePerformanceData(model, &Float:max_vel = 0.0, &max_vel_time = 0, &accel_time = 0)
{
	if(model < 400 || model > 611 || VEHDATA_PerformanceData[model - 400][e_pd_MaxVelocityTime] == 0) return 0;

	max_vel = VEHDATA_PerformanceData[model - 400][e_pd_MaxVelocity],
	max_vel_time = VEHDATA_PerformanceData[model - 400][e_pd_MaxVelocityTime],
	accel_time = VEHDATA_PerformanceData[model - 400][e_pd_AccelTime];

	return 1;
}

stock GetVehiclePerformanceLimits(&Float:highest_vel, &fastest_accel, &slowest_accel)
{
	highest_vel = VEHDATA_HighestVelocity;
	fastest_accel = VEHDATA_FastestAccel;
	slowest_accel = VEHDATA_SlowestAccel;

	return 1;
}

stock GetVehiclePerformanceRating(model, &Float:speed, &Float:accel)
{
	if(model < 400 || model > 611 || VEHDATA_PerformanceData[model - 400][e_pd_MaxVelocityTime] == 0) return 0;

	speed = (VEHDATA_PerformanceData[model - 400][e_pd_MaxVelocity] / VEHDATA_HighestVelocity);
	//accel = (1.0 - (float(VEHDATA_PerformanceData[model - 400][e_pd_AccelTime] - VEHDATA_FastestAccel) / float(VEHDATA_SlowestAccel - VEHDATA_FastestAccel))) * speed;
	accel = (1.0 - (float(VEHDATA_PerformanceData[model - 400][e_pd_AccelTime] - VEHDATA_FastestAccel) / float(VEHDATA_SlowestAccel - VEHDATA_FastestAccel)));

	return 1;
}

stock IsLandVehicle(model)
{
	if(model < 400 || model > 611 || VEHDATA_PerformanceData[model - 400][e_pd_MaxVelocityTime] == 0) return 0;

	return 1;
}
