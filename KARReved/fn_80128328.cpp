//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_801147DC.hpp"
#include "fn_801281D8.hpp"
#include "fn_801281D8.hpp"
#include "fn_80114D9C.hpp"
#include "fn_80114E24.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_updateGraphic_SpeedometerFill.hpp"
#include "fn_updateGraphic_SpeedometerFill.hpp"



void fn_80128328(PPC::Runtime::GCContext* context)
{
/*80128328 00125128*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8012832C 0012512C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80128330 00125130*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80128334 00125134*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80128338 00125138*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8012833C 0012513C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80128340 00125140*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80128344 00125144*/ PPC::Runtime::ASM::lwz(context->r0, SkipAddress_73 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80128348 00125148*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8012834C 0012514C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80128350 00125150*/ PPC::Runtime::ASM::beq(.L_8012835C);
/*80128354 00125154*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb70, context->r30));
/*80128358 00125158*/ PPC::Runtime::ASM::b(.L_80128390);
RUNTIME_PPC_JUMP_LABEL(.L_8012835C, 0x8012835C) //this is a jump label
/*8012835C 0012515C*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*80128360 00125160*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80128364 00125164*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80128368 00125168*/ PPC::Runtime::ASM::bne(.L_80128374);
/*8012836C 0012516C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb70, context->r30));
/*80128370 00125170*/ PPC::Runtime::ASM::b(.L_80128390);
RUNTIME_PPC_JUMP_LABEL(.L_80128374, 0x80128374) //this is a jump label
/*80128374 00125174*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*80128378 00125178*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8012837C 0012517C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80128380 00125180*/ PPC::Runtime::ASM::bne(.L_8012838C);
/*80128384 00125184*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb74, context->r30));
/*80128388 00125188*/ PPC::Runtime::ASM::b(.L_80128390);
RUNTIME_PPC_JUMP_LABEL(.L_8012838C, 0x8012838C) //this is a jump label
/*8012838C 0012518C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb78, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80128390, 0x80128390) //this is a jump label
/*80128390 00125190*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80128394 00125194*/ PPC::Runtime::ASM::li(context->r4, 0x1b);
/*80128398 00125198*/ PPC::Runtime::ASM::li(context->r5, 0x15);
/*8012839C 0012519C*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*801283A0 001251A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801283A4 001251A4*/ PPC::Runtime::ASM::bl(fn_801147DC);
/*801283A8 001251A8*/ PPC::Runtime::ASM::lis(context->r4, fn_801281D8 @ Get_MemoryOffset_HighBit);
/*801283AC 001251AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801283B0 001251B0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801283B4 001251B4*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*801283B8 001251B8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801281D8 @ Get_MemoryOffset_LowBit);
/*801283BC 001251BC*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801283C0 001251C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*801283C4 001251C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801283C8 001251C8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFF98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801283CC 001251CC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFF9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801283D0 001251D0*/ PPC::Runtime::ASM::bl(fn_80114D9C);
/*801283D4 001251D4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801283D8 001251D8*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*801283DC 001251DC*/ PPC::Runtime::ASM::li(context->r4, 0x2a);
/*801283E0 001251E0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801283E4 001251E4*/ PPC::Runtime::ASM::bl(fn_80114E24);
/*801283E8 001251E8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801283EC 001251EC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801283F0 001251F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*801283F4 001251F4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801283F8 001251F8*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*801283FC 001251FC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80128400 00125200*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80128404 00125204*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80128408 00125208*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8012840C 0012520C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80128410 00125210*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80128414 00125214*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0x1);
/*80128418 00125218*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8012841C 0012521C*/ PPC::Runtime::ASM::bl(fn_updateGraphic_SpeedometerFill);
/*80128420 00125220*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80128424 00125224*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80128428 00125228*/ PPC::Runtime::ASM::bl(fn_updateGraphic_SpeedometerFill);
/*8012842C 0012522C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb7c, context->r30));
/*80128430 00125230*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80128434 00125234*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80128438 00125238*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8012843C 0012523C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80128440 00125240*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80128444 00125244*/ PPC::Runtime::ASM::blr();
}