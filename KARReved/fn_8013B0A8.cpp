//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8013B0A8(PPC::Runtime::GCContext* context)
{
/*8013B0A8 00137EA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8013B0AC 00137EAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013B0B0 00137EB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8013B0B4 00137EB4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8013B0B8 00137EB8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8013B0BC 00137EBC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013B0C0 00137EC0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8013B0C4 00137EC4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8013B0C8 00137EC8*/ PPC::Runtime::ASM::li(context->r3, 0x26);
/*8013B0CC 00137ECC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaf8, context->r31));
/*8013B0D0 00137ED0*/ PPC::Runtime::ASM::li(context->r4, 0x20);
/*8013B0D4 00137ED4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8013B0D8 00137ED8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8013B0DC 00137EDC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8013B0E0 00137EE0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8013B0E4 00137EE4*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*8013B0E8 00137EE8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8013B0EC 00137EEC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8013B0F0 00137EF0*/ PPC::Runtime::ASM::bl(fn_HSD_LObjLoadDesc);
/*8013B0F4 00137EF4*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_29 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013B0F8 00137EF8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8013B0FC 00137EFC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013B100 00137F00*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*8013B104 00137F04*/ PPC::Runtime::ASM::lis(context->r4, fn_8042A22C @ Get_MemoryOffset_HighBit);
/*8013B108 00137F08*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013B10C 00137F0C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8042A22C @ Get_MemoryOffset_LowBit);
/*8013B110 00137F10*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8013B114 00137F14*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8013B118 00137F18*/ PPC::Runtime::ASM::bl(fn_GObj_AddGXLink);
/*8013B11C 00137F1C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8013B120 00137F20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8013B124 00137F24*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8013B128 00137F28*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8013B12C 00137F2C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013B130 00137F30*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013B134 00137F34*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8013B138 00137F38*/ PPC::Runtime::ASM::blr();
}