//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029AB50(PPC::Runtime::GCContext* context)
{
/*8029AB50 00297950*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8029AB54 00297954*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029AB58 00297958*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029AB5C 0029795C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029AB60 00297960*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8029AB64 00297964*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8029AB68 00297968*/ PPC::Runtime::ASM::bl(fn_GXInvalidateTexAll);
/*8029AB6C 0029796C*/ PPC::Runtime::ASM::bl(fn_80391B1C);
/*8029AB70 00297970*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029AB74 00297974*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8029AB78 00297978*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8029AB7C 0029797C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8029AB80 00297980*/ PPC::Runtime::ASM::bctrl();
/*8029AB84 00297984*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8029AB88 00297988*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029AB8C 0029798C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8029AB90 00297990*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8029AB94 00297994*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8029AB98 00297998*/ PPC::Runtime::ASM::bctrl();
/*8029AB9C 0029799C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8029ABA0 002979A0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8029ABA4 002979A4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8029ABA8 002979A8*/ PPC::Runtime::ASM::li(context->r5, 0x8);
/*8029ABAC 002979AC*/ PPC::Runtime::ASM::li(context->r7, 0x2);
/*8029ABB0 002979B0*/ PPC::Runtime::ASM::bl(fn_80391C70);
/*8029ABB4 002979B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029ABB8 002979B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029ABBC 002979BC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8029ABC0 002979C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8029ABC4 002979C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8029ABC8 002979C8*/ PPC::Runtime::ASM::blr();
}