//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8038BEF4.hpp"
#include "fn_8038C0E8.hpp"



void fn_8039899C(PPC::Runtime::GCContext* context)
{
/*8039899C 0039579C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*803989A0 003957A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803989A4 003957A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803989A8 003957A8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803989AC 003957AC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803989B0 003957B0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*803989B4 003957B4*/ PPC::Runtime::ASM::bl(fn_8038BEF4);
/*803989B8 003957B8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E0D60 @ Get_MemoryOffset_HighBit);
/*803989BC 003957BC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803989C0 003957C0*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_804E0D60 @ Get_MemoryOffset_LowBit);
/*803989C4 003957C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803989C8 003957C8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803989CC 003957CC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*803989D0 003957D0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803989D4 003957D4*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x30);
/*803989D8 003957D8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*803989DC 003957DC*/ PPC::Runtime::ASM::bl(fn_8038C0E8);
/*803989E0 003957E0*/ PPC::Runtime::ASM::lha(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803989E4 003957E4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804E0D60 @ Get_MemoryOffset_HighBit);
/*803989E8 003957E8*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803989EC 003957EC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803989F0 003957F0*/ PPC::Runtime::ASM::lha(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*803989F4 003957F4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C0470 @ Get_MemoryOffset_HighBit);
/*803989F8 003957F8*/ PPC::Runtime::ASM::subf(context->r6, context->r6, context->r0);
/*803989FC 003957FC*/ PPC::Runtime::ASM::lha(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*80398A00 00395800*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804C0470 @ Get_MemoryOffset_LowBit);
/*80398A04 00395804*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804E0D60 @ Get_MemoryOffset_LowBit);
/*80398A08 00395808*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80398A0C 0039580C*/ PPC::Runtime::ASM::subf(context->r3, context->r8, context->r7);
/*80398A10 00395810*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80398A14 00395814*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r31));
/*80398A18 00395818*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80398A1C 0039581C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80398A20 00395820*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80398A24 00395824*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80398A28 00395828*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80398A2C 0039582C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80398A30 00395830*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80398A34 00395834*/ PPC::Runtime::ASM::blr();
}