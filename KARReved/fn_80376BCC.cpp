//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80376BCC(PPC::Runtime::GCContext* context)
{
/*80376BCC 003739CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80376BD0 003739D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80376BD4 003739D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80376BD8 003739D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80376BDC 003739DC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80376BE0 003739E0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r3));
/*80376BE4 003739E4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80376BE8 003739E8*/ PPC::Runtime::ASM::beq(.L_80376C3C);
/*80376BEC 003739EC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e, context->r31));
/*80376BF0 003739F0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80376BF4 003739F4*/ PPC::Runtime::ASM::beq(.L_80376C3C);
/*80376BF8 003739F8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80376BFC 003739FC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80376C00 00373A00*/ PPC::Runtime::ASM::beq(.L_80376C3C);
/*80376C04 00373A04*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80376C08 00373A08*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80376C0C 00373A0C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBAB0 @ Get_MemoryOffset_SDA21);
/*80376C10 00373A10*/ PPC::Runtime::ASM::li(context->r6, lbl_805DBAA8 @ Get_MemoryOffset_SDA21);
/*80376C14 00373A14*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80376C18 00373A18*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80376C1C 00373A1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80376C20 00373A20*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xc);
/*80376C24 00373A24*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x18);
/*80376C28 00373A28*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80376C2C 00373A2C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80376C30 00373A30*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80376C34 00373A34*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80376C38 00373A38*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80376C3C, 0x80376C3C) //this is a jump label
/*80376C3C 00373A3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80376C40 00373A40*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80376C44 00373A44*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80376C48 00373A48*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80376C4C 00373A4C*/ PPC::Runtime::ASM::blr();
}