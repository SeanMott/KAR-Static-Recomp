//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801D19B4(PPC::Runtime::GCContext* context)
{
/*801D19B4 001CE7B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801D19B8 001CE7B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D19BC 001CE7BC*/ PPC::Runtime::ASM::lis(context->r4, lbl_80559FE4 @ Get_MemoryOffset_HighBit);
/*801D19C0 001CE7C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D19C4 001CE7C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D19C8 001CE7C8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801D19CC 001CE7CC*/ PPC::Runtime::ASM::addi(context->r3, context->r4, lbl_80559FE4 @ Get_MemoryOffset_LowBit);
/*801D19D0 001CE7D0*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*801D19D4 001CE7D4*/ PPC::Runtime::ASM::lis(context->r4, lbl_8055A010 @ Get_MemoryOffset_HighBit);
/*801D19D8 001CE7D8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r31));
/*801D19DC 001CE7DC*/ PPC::Runtime::ASM::addi(context->r3, context->r4, lbl_8055A010 @ Get_MemoryOffset_LowBit);
/*801D19E0 001CE7E0*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*801D19E4 001CE7E4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801D19E8 001CE7E8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x308, context->r31));
/*801D19EC 001CE7EC*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*801D19F0 001CE7F0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801D19F4 001CE7F4*/ PPC::Runtime::ASM::mr(context->r4, context->r6);
/*801D19F8 001CE7F8*/ PPC::Runtime::ASM::b(.L_801D1A18);
RUNTIME_PPC_JUMP_LABEL(.L_801D19FC, 0x801D19FC) //this is a jump label
/*801D19FC 001CE7FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r31));
/*801D1A00 001CE800*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x4);
/*801D1A04 001CE804*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*801D1A08 001CE808*/ PPC::Runtime::ASM::sthx(context->r5, context->r3, context->r0);
/*801D1A0C 001CE80C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r31));
/*801D1A10 001CE810*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r6);
/*801D1A14 001CE814*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_801D1A18, 0x801D1A18) //this is a jump label
/*801D1A18 001CE818*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801D1A1C 001CE81C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801D1A20 001CE820*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801D1A24 001CE824*/ PPC::Runtime::ASM::cmpw(context->r7, context->r0);
/*801D1A28 001CE828*/ PPC::Runtime::ASM::blt(.L_801D19FC);
/*801D1A2C 001CE82C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D1A30 001CE830*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D1A34 001CE834*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D1A38 001CE838*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801D1A3C 001CE83C*/ PPC::Runtime::ASM::blr();
}