//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80072C90.hpp"



void fn_80283D98(PPC::Runtime::GCContext* context)
{
/*80283D98 00280B98*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80283D9C 00280B9C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80283DA0 00280BA0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x9);
/*80283DA4 00280BA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80283DA8 00280BA8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80283DAC 00280BAC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80283DB0 00280BB0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80283DB4 00280BB4*/ PPC::Runtime::ASM::bne(.L_80283DFC);
/*80283DB8 00280BB8*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80283DBC 00280BBC*/ PPC::Runtime::ASM::li(context->r30, StructWithStructs_13 @ Get_MemoryOffset_SDA21);
/*80283DC0 00280BC0*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80283DC4, 0x80283DC4) //this is a jump label
/*80283DC4 00280BC4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80283DC8 00280BC8*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*80283DCC 00280BCC*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*80283DD0 00280BD0*/ PPC::Runtime::ASM::li(context->r6, 0x6);
/*80283DD4 00280BD4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80283DD8 00280BD8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80283DDC 00280BDC*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*80283DE0 00280BE0*/ PPC::Runtime::ASM::li(context->r9, 0x5);
/*80283DE4 00280BE4*/ PPC::Runtime::ASM::li(context->r10, 0x20);
/*80283DE8 00280BE8*/ PPC::Runtime::ASM::bl(fn_80072C90);
/*80283DEC 00280BEC*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80283DF0 00280BF0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*80283DF4 00280BF4*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*80283DF8 00280BF8*/ PPC::Runtime::ASM::blt(.L_80283DC4);
RUNTIME_PPC_JUMP_LABEL(.L_80283DFC, 0x80283DFC) //this is a jump label
/*80283DFC 00280BFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80283E00 00280C00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80283E04 00280C04*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80283E08 00280C08*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80283E0C 00280C0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80283E10 00280C10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80283E14 00280C14*/ PPC::Runtime::ASM::blr();
}