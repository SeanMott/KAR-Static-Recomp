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



void fn_80049554(PPC::Runtime::GCContext* context)
{
/*80049554 00046354*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80049558 00046358*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004955C 0004635C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80049560 00046360*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80049564 00046364*/ PPC::Runtime::ASM::lis(context->r3, fn_80059CFC @ Get_MemoryOffset_HighBit);
/*80049568 00046368*/ PPC::Runtime::ASM::addi(context->r3, context->r3, fn_80059CFC @ Get_MemoryOffset_LowBit);
/*8004956C 0004636C*/ PPC::Runtime::ASM::bl(fn_80448220);
/*80049570 00046370*/ PPC::Runtime::ASM::bl(fn_80077980);
/*80049574 00046374*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_163 @ Get_MemoryOffset_HighBit);
/*80049578 00046378*/ PPC::Runtime::ASM::lis(context->r6, fn_80078604 @ Get_MemoryOffset_HighBit);
/*8004957C 0004637C*/ PPC::Runtime::ASM::lis(context->r5, fn_80078620 @ Get_MemoryOffset_HighBit);
/*80049580 00046380*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80049584 00046384*/ PPC::Runtime::ASM::addi(context->r7, context->r6, fn_80078604 @ Get_MemoryOffset_LowBit);
/*80049588 00046388*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_163 @ Get_MemoryOffset_LowBit);
/*8004958C 0004638C*/ PPC::Runtime::ASM::addi(context->r8, context->r5, fn_80078620 @ Get_MemoryOffset_LowBit);
/*80049590 00046390*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80049594 00046394*/ PPC::Runtime::ASM::li(context->r6, 0x1c);
/*80049598 00046398*/ PPC::Runtime::ASM::bl(fn_80077B50);
/*8004959C 0004639C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800495A0 000463A0*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD578 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800495A4 000463A4*/ PPC::Runtime::ASM::bne(.L_800495B0);
/*800495A8 000463A8*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*800495AC 000463AC*/ PPC::Runtime::ASM::b(.L_80049640);
RUNTIME_PPC_JUMP_LABEL(.L_800495B0, 0x800495B0) //this is a jump label
/*800495B0 000463B0*/ PPC::Runtime::ASM::li(context->r3, 0x1b);
/*800495B4 000463B4*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*800495B8 000463B8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800495BC 000463BC*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*800495C0 000463C0*/ PPC::Runtime::ASM::lis(context->r4, fn_80049250 @ Get_MemoryOffset_HighBit);
/*800495C4 000463C4*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD580 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800495C8 000463C8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80049250 @ Get_MemoryOffset_LowBit);
/*800495CC 000463CC*/ PPC::Runtime::ASM::li(context->r5, 0x15);
/*800495D0 000463D0*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*800495D4 000463D4*/ PPC::Runtime::ASM::bl(fn_GObj_AddGXLink);
/*800495D8 000463D8*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*800495DC 000463DC*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*800495E0 000463E0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800495E4 000463E4*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*800495E8 000463E8*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_162 @ Get_MemoryOffset_HighBit);
/*800495EC 000463EC*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD57C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800495F0 000463F0*/ PPC::Runtime::ASM::addi(context->r3, context->r4, MemoryOffset_162 @ Get_MemoryOffset_LowBit);
/*800495F4 000463F4*/ PPC::Runtime::ASM::bl(fn_HSD_CObjLoadDesc);
/*800495F8 000463F8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*800495FC 000463FC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD57C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80049600 00046400*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80049604 00046404*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*80049608 00046408*/ PPC::Runtime::ASM::lis(context->r4, fn_8042A29C @ Get_MemoryOffset_HighBit);
/*8004960C 0004640C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD57C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80049610 00046410*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8042A29C @ Get_MemoryOffset_LowBit);
/*80049614 00046414*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*80049618 00046418*/ PPC::Runtime::ASM::bl(fn_80429728);
/*8004961C 0004641C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD57C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80049620 00046420*/ PPC::Runtime::ASM::lis(context->r4, 0x20);
/*80049624 00046424*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80049628 00046428*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8004962C 0004642C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80049630 00046430*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD578 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80049634 00046434*/ PPC::Runtime::ASM::bl(fn_80077ED4);
/*80049638 00046438*/ PPC::Runtime::ASM::li(context->r3, 0x10);
/*8004963C 0004643C*/ PPC::Runtime::ASM::bl(fn_8000A498);
RUNTIME_PPC_JUMP_LABEL(.L_80049640, 0x80049640) //this is a jump label
/*80049640 00046440*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80049644 00046444*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80049648 00046448*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004964C 0004644C*/ PPC::Runtime::ASM::blr();
}