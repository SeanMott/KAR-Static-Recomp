//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_80059CFC.hpp"
#include "fn_80059CFC.hpp"
#include "fn_80077980.hpp"
#include "fn_80078604.hpp"
#include "fn_80078620.hpp"
#include "fn_80078604.hpp"
#include "fn_80078620.hpp"
#include "fn_80077B50.hpp"
#include "fn_800064F0.hpp"
#include "fn_80049250.hpp"
#include "fn_80049250.hpp"
#include "fn_80077ED4.hpp"
#include "fn_8000A498.hpp"



void fn_80049458(PPC::Runtime::GCContext* context)
{
/*80049458 00046258*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004945C 0004625C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80049460 00046260*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80049464 00046264*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80049468 00046268*/ PPC::Runtime::ASM::lis(context->r3, fn_80059CFC @ Get_MemoryOffset_HighBit);
/*8004946C 0004626C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, fn_80059CFC @ Get_MemoryOffset_LowBit);
/*80049470 00046270*/ PPC::Runtime::ASM::bl(fn_80448220);
/*80049474 00046274*/ PPC::Runtime::ASM::bl(fn_80077980);
/*80049478 00046278*/ PPC::Runtime::ASM::lis(context->r3, String_ "MvHowtoPlay.h4" Get_MemoryOffset_HighBit);
/*8004947C 0004627C*/ PPC::Runtime::ASM::lis(context->r6, fn_80078604 @ Get_MemoryOffset_HighBit);
/*80049480 00046280*/ PPC::Runtime::ASM::lis(context->r5, fn_80078620 @ Get_MemoryOffset_HighBit);
/*80049484 00046284*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80049488 00046288*/ PPC::Runtime::ASM::addi(context->r7, context->r6, fn_80078604 @ Get_MemoryOffset_LowBit);
/*8004948C 0004628C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "MvHowtoPlay.h4" Get_MemoryOffset_LowBit);
/*80049490 00046290*/ PPC::Runtime::ASM::addi(context->r8, context->r5, fn_80078620 @ Get_MemoryOffset_LowBit);
/*80049494 00046294*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80049498 00046298*/ PPC::Runtime::ASM::li(context->r6, 0x1c);
/*8004949C 0004629C*/ PPC::Runtime::ASM::bl(fn_80077B50);
/*800494A0 000462A0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800494A4 000462A4*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD578 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800494A8 000462A8*/ PPC::Runtime::ASM::bne(.L_800494B4);
/*800494AC 000462AC*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*800494B0 000462B0*/ PPC::Runtime::ASM::b(.L_80049544);
RUNTIME_PPC_JUMP_LABEL(.L_800494B4, 0x800494B4) //this is a jump label
/*800494B4 000462B4*/ PPC::Runtime::ASM::li(context->r3, 0x1b);
/*800494B8 000462B8*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*800494BC 000462BC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800494C0 000462C0*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*800494C4 000462C4*/ PPC::Runtime::ASM::lis(context->r4, fn_80049250 @ Get_MemoryOffset_HighBit);
/*800494C8 000462C8*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD580 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800494CC 000462CC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80049250 @ Get_MemoryOffset_LowBit);
/*800494D0 000462D0*/ PPC::Runtime::ASM::li(context->r5, 0x15);
/*800494D4 000462D4*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*800494D8 000462D8*/ PPC::Runtime::ASM::bl(fn_GObj_AddGXLink);
/*800494DC 000462DC*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*800494E0 000462E0*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*800494E4 000462E4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800494E8 000462E8*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*800494EC 000462EC*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_162 @ Get_MemoryOffset_HighBit);
/*800494F0 000462F0*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD57C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800494F4 000462F4*/ PPC::Runtime::ASM::addi(context->r3, context->r4, MemoryOffset_162 @ Get_MemoryOffset_LowBit);
/*800494F8 000462F8*/ PPC::Runtime::ASM::bl(fn_HSD_CObjLoadDesc);
/*800494FC 000462FC*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80049500 00046300*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD57C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80049504 00046304*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80049508 00046308*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*8004950C 0004630C*/ PPC::Runtime::ASM::lis(context->r4, fn_8042A29C @ Get_MemoryOffset_HighBit);
/*80049510 00046310*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD57C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80049514 00046314*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8042A29C @ Get_MemoryOffset_LowBit);
/*80049518 00046318*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*8004951C 0004631C*/ PPC::Runtime::ASM::bl(fn_80429728);
/*80049520 00046320*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD57C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80049524 00046324*/ PPC::Runtime::ASM::lis(context->r4, 0x20);
/*80049528 00046328*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8004952C 0004632C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*80049530 00046330*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80049534 00046334*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD578 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80049538 00046338*/ PPC::Runtime::ASM::bl(fn_80077ED4);
/*8004953C 0004633C*/ PPC::Runtime::ASM::li(context->r3, 0x10);
/*80049540 00046340*/ PPC::Runtime::ASM::bl(fn_8000A498);
RUNTIME_PPC_JUMP_LABEL(.L_80049544, 0x80049544) //this is a jump label
/*80049544 00046344*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80049548 00046348*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004954C 0004634C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80049550 00046350*/ PPC::Runtime::ASM::blr();
}