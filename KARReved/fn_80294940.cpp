//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80294940(PPC::Runtime::GCContext* context)
{
/*80294940 00291740*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80294944 00291744*/ PPC::Runtime::ASM::mflr(context->r0);
/*80294948 00291748*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029494C 0029174C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80294950 00291750*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80294954 00291754*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7B0C @ Get_MemoryOffset_SDA21);
/*80294958 00291758*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7B04 @ Get_MemoryOffset_SDA21);
/*8029495C 0029175C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80294960 00291760*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80294964 00291764*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80294968 00291768*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8029496C 0029176C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80294970 00291770*/ PPC::Runtime::ASM::blr();
}