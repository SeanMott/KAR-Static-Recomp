//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_plGetPlayerUnk4.hpp"
#include "fn_80062CA4.hpp"
#include "fn_800B7E90.hpp"
#include "fn_800D4EF4.hpp"
#include "fn_800D4EC8.hpp"
#include "fn_800C2FD4.hpp"



void fn_800C5390(PPC::Runtime::GCContext* context)
{
/*800C5390 000C2190*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*800C5394 000C2194*/ PPC::Runtime::ASM::mflr(context->r0);
/*800C5398 000C2198*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800C539C 000C219C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*800C53A0 000C21A0*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*800C53A4 000C21A4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800C53A8 000C21A8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*800C53AC 000C21AC*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r3));
/*800C53B0 000C21B0*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*800C53B4 000C21B4*/ PPC::Runtime::ASM::beq(.L_800C5430);
/*800C53B8 000C21B8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r27));
/*800C53BC 000C21BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*800C53C0 000C21C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*800C53C4 000C21C4*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x1);
/*800C53C8 000C21C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*800C53CC 000C21CC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800C53D0 000C21D0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C53D4 000C21D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800C53D8 000C21D8*/ PPC::Runtime::ASM::bne(.L_800C53F0);
/*800C53DC 000C21DC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C53E0 000C21E0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF3E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C53E4 000C21E4*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*800C53E8 000C21E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C53EC 000C21EC*/ PPC::Runtime::ASM::b(.L_800C5440);
RUNTIME_PPC_JUMP_LABEL(.L_800C53F0, 0x800C53F0) //this is a jump label
/*800C53F0 000C21F0*/ PPC::Runtime::ASM::cmpwi(context->r5, 0xa);
/*800C53F4 000C21F4*/ PPC::Runtime::ASM::bne(.L_800C540C);
/*800C53F8 000C21F8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C53FC 000C21FC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF3E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C5400 000C2200*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*800C5404 000C2204*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C5408 000C2208*/ PPC::Runtime::ASM::b(.L_800C5440);
RUNTIME_PPC_JUMP_LABEL(.L_800C540C, 0x800C540C) //this is a jump label
/*800C540C 000C220C*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa6, context->r27));
/*800C5410 000C2210*/ PPC::Runtime::ASM::bl(fn_plGetPlayerUnk4);
/*800C5414 000C2214*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*800C5418 000C2218*/ PPC::Runtime::ASM::bne(.L_800C5440);
/*800C541C 000C221C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C5420 000C2220*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF3E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C5424 000C2224*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*800C5428 000C2228*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C542C 000C222C*/ PPC::Runtime::ASM::b(.L_800C5440);
RUNTIME_PPC_JUMP_LABEL(.L_800C5430, 0x800C5430) //this is a jump label
/*800C5430 000C2230*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF3D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C5434 000C2234*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800C5438 000C2238*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C543C 000C223C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800C5440, 0x800C5440) //this is a jump label
/*800C5440 000C2240*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800C5444 000C2244*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*800C5448 000C2248*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C544C 000C224C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800C5450 000C2250*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800C5454 000C2254*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800C5458 000C2258*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800C545C 000C225C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x224, context->r30));
/*800C5460 000C2260*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800C5464 000C2264*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800C5468 000C2268*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800C546C 000C226C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x228, context->r30));
/*800C5470 000C2270*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800C5474 000C2274*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800C5478 000C2278*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C547C 000C227C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22c, context->r30));
/*800C5480 000C2280*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800C5484 000C2284*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800C5488 000C2288*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800C548C 000C228C*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*800C5490 000C2290*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF3FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C5494 000C2294*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800C5498 000C2298*/ PPC::Runtime::ASM::ble(.L_800C54AC);
/*800C549C 000C229C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*800C54A0 000C22A0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800C54A4 000C22A4*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*800C54A8 000C22A8*/ PPC::Runtime::ASM::b(.L_800C54D0);
RUNTIME_PPC_JUMP_LABEL(.L_800C54AC, 0x800C54AC) //this is a jump label
/*800C54AC 000C22AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*800C54B0 000C22B0*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*800C54B4 000C22B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800C54B8 000C22B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*800C54BC 000C22BC*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*800C54C0 000C22C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C54C4 000C22C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r27));
/*800C54C8 000C22C8*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*800C54CC 000C22CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800C54D0, 0x800C54D0) //this is a jump label
/*800C54D0 000C22D0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800C54D4 000C22D4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*800C54D8 000C22D8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF43C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C54DC 000C22DC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800C54E0 000C22E0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800C54E4 000C22E4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*800C54E8 000C22E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x224, context->r30));
/*800C54EC 000C22EC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C54F0 000C22F0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800C54F4 000C22F4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*800C54F8 000C22F8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x228, context->r30));
/*800C54FC 000C22FC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800C5500 000C2300*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800C5504 000C2304*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*800C5508 000C2308*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22c, context->r30));
/*800C550C 000C230C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x224, context->r30));
/*800C5510 000C2310*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x228, context->r30));
/*800C5514 000C2314*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800C5518 000C2318*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*800C551C 000C231C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22c, context->r30));
/*800C5520 000C2320*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800C5524 000C2324*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800C5528 000C2328*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800C552C 000C232C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800C5530 000C2330*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800C5534 000C2334*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800C5538 000C2338*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*800C553C 000C233C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800C5540 000C2340*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C5544 000C2344*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800C5548 000C2348*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800C554C 000C234C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800C5550 000C2350*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800C5554 000C2354*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800C5558 000C2358*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF3FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C555C 000C235C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800C5560 000C2360*/ PPC::Runtime::ASM::bge(.L_800C5580);
/*800C5564 000C2364*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r30));
/*800C5568 000C2368*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*800C556C 000C236C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*800C5570 000C2370*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800C5574 000C2374*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C5578 000C2378*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*800C557C 000C237C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800C5580, 0x800C5580) //this is a jump label
/*800C5580 000C2380*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r30));
/*800C5584 000C2384*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C5588 000C2388*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r5));
/*800C558C 000C238C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r5));
/*800C5590 000C2390*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800C5594 000C2394*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r5));
/*800C5598 000C2398*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800C559C 000C239C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800C55A0 000C23A0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*800C55A4 000C23A4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800C55A8 000C23A8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800C55AC 000C23AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800C55B0 000C23B0*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f1, context->f0);
/*800C55B4 000C23B4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800C55B8 000C23B8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800C55BC 000C23BC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF440 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C55C0 000C23C0*/ PPC::Runtime::ASM::fmadds(context->f1, context->f3, context->f2, context->f1);
/*800C55C4 000C23C4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800C55C8 000C23C8*/ PPC::Runtime::ASM::ble(.L_800C55F4);
/*800C55CC 000C23CC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r5));
/*800C55D0 000C23D0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r5));
/*800C55D4 000C23D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
/*800C55D8 000C23D8*/ PPC::Runtime::ASM::fneg(context->f2, context->f2);
/*800C55DC 000C23DC*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
/*800C55E0 000C23E0*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*800C55E4 000C23E4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800C55E8 000C23E8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800C55EC 000C23EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800C55F0 000C23F0*/ PPC::Runtime::ASM::b(.L_800C5618);
RUNTIME_PPC_JUMP_LABEL(.L_800C55F4, 0x800C55F4) //this is a jump label
/*800C55F4 000C23F4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF444 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C55F8 000C23F8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800C55FC 000C23FC*/ PPC::Runtime::ASM::bge(.L_800C5618);
/*800C5600 000C2400*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r5));
/*800C5604 000C2404*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r5));
/*800C5608 000C2408*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
/*800C560C 000C240C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800C5610 000C2410*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800C5614 000C2414*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800C5618, 0x800C5618) //this is a jump label
/*800C5618 000C2418*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800C561C 000C241C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800C5620 000C2420*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*800C5624 000C2424*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800C5628 000C2428*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*800C562C 000C242C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF408 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C5630 000C2430*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*800C5634 000C2434*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*800C5638 000C2438*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r30));
/*800C563C 000C243C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800C5640 000C2440*/ PPC::Runtime::ASM::beq(.L_800C5668);
/*800C5644 000C2444*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r3));
/* 800C5648 000C2448  54 60 07 FF */ clrlwi. context->r0 , context->r3 , 31
/*800C564C 000C244C*/ PPC::Runtime::ASM::bne(.L_800C5658);
/* 800C5650 000C2450  54 60 FF FF */ extrwi. context->r0 , context->r3 , 1 , 30
/*800C5654 000C2454*/ PPC::Runtime::ASM::beq(.L_800C5668);
RUNTIME_PPC_JUMP_LABEL(.L_800C5658, 0x800C5658) //this is a jump label
/*800C5658 000C2458*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ca, context->r30));
/*800C565C 000C245C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C5660 000C2460*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 6, 25, 25);
/*800C5664 000C2464*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ca, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800C5668, 0x800C5668) //this is a jump label
/*800C5668 000C2468*/ PPC::Runtime::ASM::lbz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r30));
/*800C566C 000C246C*/ PPC::Runtime::ASM::bl(fn_800D4EF4);
/*800C5670 000C2470*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800C5674 000C2474*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x100);
/*800C5678 000C2478*/ PPC::Runtime::ASM::blt(.L_800C5694);
/*800C567C 000C247C*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_786 @ Get_MemoryOffset_HighBit);
/*800C5680 000C2480*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_787 @ Get_MemoryOffset_HighBit);
/*800C5684 000C2484*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_786 @ Get_MemoryOffset_LowBit);
/*800C5688 000C2488*/ PPC::Runtime::ASM::li(context->r4, 0x239);
/*800C568C 000C248C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_787 @ Get_MemoryOffset_LowBit);
/*800C5690 000C2490*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800C5694, 0x800C5694) //this is a jump label
/*800C5694 000C2494*/ PPC::Runtime::ASM::bl(fn_800D4EC8);
/*800C5698 000C2498*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*800C569C 000C249C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800C56A0 000C24A0*/ PPC::Runtime::ASM::b(.L_800C57A0);
RUNTIME_PPC_JUMP_LABEL(.L_800C56A4, 0x800C56A4) //this is a jump label
/*800C56A4 000C24A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r30));
/*800C56A8 000C24A8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800C56AC 000C24AC*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*800C56B0 000C24B0*/ PPC::Runtime::ASM::bne(.L_800C56BC);
/*800C56B4 000C24B4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C56B8 000C24B8*/ PPC::Runtime::ASM::b(.L_800C5770);
RUNTIME_PPC_JUMP_LABEL(.L_800C56BC, 0x800C56BC) //this is a jump label
/*800C56BC 000C24BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r30));
/*800C56C0 000C24C0*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*800C56C4 000C24C4*/ PPC::Runtime::ASM::bne(.L_800C56D0);
/*800C56C8 000C24C8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C56CC 000C24CC*/ PPC::Runtime::ASM::b(.L_800C5770);
RUNTIME_PPC_JUMP_LABEL(.L_800C56D0, 0x800C56D0) //this is a jump label
/*800C56D0 000C24D0*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x8);
/*800C56D4 000C24D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r30));
/*800C56D8 000C24D8*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*800C56DC 000C24DC*/ PPC::Runtime::ASM::bne(.L_800C56E8);
/*800C56E0 000C24E0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C56E4 000C24E4*/ PPC::Runtime::ASM::b(.L_800C5770);
RUNTIME_PPC_JUMP_LABEL(.L_800C56E8, 0x800C56E8) //this is a jump label
/*800C56E8 000C24E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r4));
/*800C56EC 000C24EC*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*800C56F0 000C24F0*/ PPC::Runtime::ASM::bne(.L_800C56FC);
/*800C56F4 000C24F4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C56F8 000C24F8*/ PPC::Runtime::ASM::b(.L_800C5770);
RUNTIME_PPC_JUMP_LABEL(.L_800C56FC, 0x800C56FC) //this is a jump label
/*800C56FC 000C24FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r4));
/*800C5700 000C2500*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*800C5704 000C2504*/ PPC::Runtime::ASM::bne(.L_800C5710);
/*800C5708 000C2508*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C570C 000C250C*/ PPC::Runtime::ASM::b(.L_800C5770);
RUNTIME_PPC_JUMP_LABEL(.L_800C5710, 0x800C5710) //this is a jump label
/*800C5710 000C2510*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r4));
/*800C5714 000C2514*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*800C5718 000C2518*/ PPC::Runtime::ASM::bne(.L_800C5724);
/*800C571C 000C251C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C5720 000C2520*/ PPC::Runtime::ASM::b(.L_800C5770);
RUNTIME_PPC_JUMP_LABEL(.L_800C5724, 0x800C5724) //this is a jump label
/*800C5724 000C2524*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e0, context->r4));
/*800C5728 000C2528*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*800C572C 000C252C*/ PPC::Runtime::ASM::bne(.L_800C5738);
/*800C5730 000C2530*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C5734 000C2534*/ PPC::Runtime::ASM::b(.L_800C5770);
RUNTIME_PPC_JUMP_LABEL(.L_800C5738, 0x800C5738) //this is a jump label
/*800C5738 000C2538*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r4));
/*800C573C 000C253C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*800C5740 000C2540*/ PPC::Runtime::ASM::bne(.L_800C574C);
/*800C5744 000C2544*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C5748 000C2548*/ PPC::Runtime::ASM::b(.L_800C5770);
RUNTIME_PPC_JUMP_LABEL(.L_800C574C, 0x800C574C) //this is a jump label
/*800C574C 000C254C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r4));
/*800C5750 000C2550*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*800C5754 000C2554*/ PPC::Runtime::ASM::bne(.L_800C5760);
/*800C5758 000C2558*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C575C 000C255C*/ PPC::Runtime::ASM::b(.L_800C5770);
RUNTIME_PPC_JUMP_LABEL(.L_800C5760, 0x800C5760) //this is a jump label
/*800C5760 000C2560*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r4));
/*800C5764 000C2564*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*800C5768 000C2568*/ PPC::Runtime::ASM::bne(.L_800C5770);
/*800C576C 000C256C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800C5770, 0x800C5770) //this is a jump label
/*800C5770 000C2570*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800C5774 000C2574*/ PPC::Runtime::ASM::bne(.L_800C5798);
/*800C5778 000C2578*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800C577C 000C257C*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800C5780 000C2580*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800C5784 000C2584*/ PPC::Runtime::ASM::bl(fn_800C2FD4);
/*800C5788 000C2588*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800C578C 000C258C*/ PPC::Runtime::ASM::beq(.L_800C5798);
/*800C5790 000C2590*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800C5794 000C2594*/ PPC::Runtime::ASM::b(.L_800C57AC);
RUNTIME_PPC_JUMP_LABEL(.L_800C5798, 0x800C5798) //this is a jump label
/*800C5798 000C2598*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*800C579C 000C259C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x9c);
RUNTIME_PPC_JUMP_LABEL(.L_800C57A0, 0x800C57A0) //this is a jump label
/*800C57A0 000C25A0*/ PPC::Runtime::ASM::cmpw(context->r28, context->r31);
/*800C57A4 000C25A4*/ PPC::Runtime::ASM::blt(.L_800C56A4);
/*800C57A8 000C25A8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800C57AC, 0x800C57AC) //this is a jump label
/*800C57AC 000C25AC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800C57B0 000C25B0*/ PPC::Runtime::ASM::beq(.L_800C57BC);
/*800C57B4 000C25B4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C57B8 000C25B8*/ PPC::Runtime::ASM::b(.L_800C57C0);
RUNTIME_PPC_JUMP_LABEL(.L_800C57BC, 0x800C57BC) //this is a jump label
/*800C57BC 000C25BC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800C57C0, 0x800C57C0) //this is a jump label
/*800C57C0 000C25C0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*800C57C4 000C25C4*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800C57C8 000C25C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800C57CC 000C25CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800C57D0 000C25D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*800C57D4 000C25D4*/ PPC::Runtime::ASM::blr();
}