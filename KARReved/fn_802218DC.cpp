//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802218DC(PPC::Runtime::GCContext* context)
{
/*802218DC 0021E6DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802218E0 0021E6E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802218E4 0021E6E4*/ PPC::Runtime::ASM::lis(context->r4, lbl_8055A924 @ Get_MemoryOffset_HighBit);
/*802218E8 0021E6E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802218EC 0021E6EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802218F0 0021E6F0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802218F4 0021E6F4*/ PPC::Runtime::ASM::addi(context->r3, context->r4, lbl_8055A924 @ Get_MemoryOffset_LowBit);
/*802218F8 0021E6F8*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*802218FC 0021E6FC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*80221900 0021E700*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80221904 0021E704*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80221908 0021E708*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022190C 0021E70C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80221910 0021E710*/ PPC::Runtime::ASM::blr();
}