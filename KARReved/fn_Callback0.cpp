//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_Callback0(PPC::Runtime::GCContext* context)
{
/*80471210 0046E010*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r3, 16);
/*80471214 0046E014*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x806);
/*80471218 0046E018*/ PPC::Runtime::ASM::beq(.L_8047124C);
/*8047121C 0046E01C*/ PPC::Runtime::ASM::bge(.L_8047122C);
/*80471220 0046E020*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x800);
/*80471224 0046E024*/ PPC::Runtime::ASM::beq(.L_8047124C);
/*80471228 0046E028*/ PPC::Runtime::ASM::b(.L_80471264);
RUNTIME_PPC_JUMP_LABEL(.L_8047122C, 0x8047122C) //this is a jump label
/*8047122C 0046E02C*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*80471230 0046E030*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x779b);
/*80471234 0046E034*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80471238 0046E038*/ PPC::Runtime::ASM::bge(.L_80471264);
/*8047123C 0046E03C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x779d);
/*80471240 0046E040*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80471244 0046E044*/ PPC::Runtime::ASM::bge(.L_8047124C);
/*80471248 0046E048*/ PPC::Runtime::ASM::b(.L_80471264);
RUNTIME_PPC_JUMP_LABEL(.L_8047124C, 0x8047124C) //this is a jump label
/*8047124C 0046E04C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE644 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80471250 0046E050*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80471254 0046E054*/ PPC::Runtime::ASM::bne(.L_80471264);
/*80471258 0046E058*/ PPC::Runtime::ASM::lis(context->r3, lbl_805B90A0 @ Get_MemoryOffset_HighBit);
/*8047125C 0046E05C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_805B90A0 @ Get_MemoryOffset_LowBit);
/*80471260 0046E060*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80471264, 0x80471264) //this is a jump label
/*80471264 0046E064*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80471268 0046E068*/ PPC::Runtime::ASM::blr();
}