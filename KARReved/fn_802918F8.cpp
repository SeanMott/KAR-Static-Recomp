//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802918F8(PPC::Runtime::GCContext* context)
{
/*802918F8 0028E6F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802918FC 0028E6FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80291900 0028E700*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80291904 0028E704*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7668 @ Get_MemoryOffset_SDA21);
/*80291908 0028E708*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029190C 0028E70C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7660 @ Get_MemoryOffset_SDA21);
/*80291910 0028E710*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80291914 0028E714*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80291918 0028E718*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8029191C 0028E71C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80291920 0028E720*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80291924 0028E724*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80291928 0028E728*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8029192C 0028E72C*/ PPC::Runtime::ASM::blr();
}