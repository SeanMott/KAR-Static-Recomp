//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8045C7D4(PPC::Runtime::GCContext* context)
{
/*8045C7D4 004595D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8045C7D8 004595D8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8045C7DC 004595DC*/ PPC::Runtime::ASM::beq(.L_8045C7F0);
/*8045C7E0 004595E0*/ PPC::Runtime::ASM::bge(.L_8045C800);
/*8045C7E4 004595E4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8045C7E8 004595E8*/ PPC::Runtime::ASM::bge(.L_8045C7F8);
/*8045C7EC 004595EC*/ PPC::Runtime::ASM::b(.L_8045C800);
RUNTIME_PPC_JUMP_LABEL(.L_8045C7F0, 0x8045C7F0) //this is a jump label
/*8045C7F0 004595F0*/ PPC::Runtime::ASM::li(context->r5, 0x1800);
/*8045C7F4 004595F4*/ PPC::Runtime::ASM::b(.L_8045C804);
RUNTIME_PPC_JUMP_LABEL(.L_8045C7F8, 0x8045C7F8) //this is a jump label
/*8045C7F8 004595F8*/ PPC::Runtime::ASM::li(context->r5, 0xe00);
/*8045C7FC 004595FC*/ PPC::Runtime::ASM::b(.L_8045C804);
RUNTIME_PPC_JUMP_LABEL(.L_8045C800, 0x8045C800) //this is a jump label
/*8045C800 00459600*/ PPC::Runtime::ASM::li(context->r5, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8045C804, 0x8045C804) //this is a jump label
/*8045C804 00459604*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8045C808 00459608*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8045C80C 0045960C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8045C810 00459610*/ PPC::Runtime::ASM::b(.L_8045C844);
RUNTIME_PPC_JUMP_LABEL(.L_8045C814, 0x8045C814) //this is a jump label
/*8045C814 00459614*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8045C818 00459618*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8045C81C 0045961C*/ PPC::Runtime::ASM::beq(.L_8045C830);
/*8045C820 00459620*/ PPC::Runtime::ASM::bge(.L_8045C840);
/*8045C824 00459624*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8045C828 00459628*/ PPC::Runtime::ASM::bge(.L_8045C838);
/*8045C82C 0045962C*/ PPC::Runtime::ASM::b(.L_8045C840);
RUNTIME_PPC_JUMP_LABEL(.L_8045C830, 0x8045C830) //this is a jump label
/*8045C830 00459630*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x800);
/*8045C834 00459634*/ PPC::Runtime::ASM::b(.L_8045C840);
RUNTIME_PPC_JUMP_LABEL(.L_8045C838, 0x8045C838) //this is a jump label
/*8045C838 00459638*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8045C83C 0045963C*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x400);
RUNTIME_PPC_JUMP_LABEL(.L_8045C840, 0x8045C840) //this is a jump label
/*8045C840 00459640*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8045C844, 0x8045C844) //this is a jump label
/*8045C844 00459644*/ PPC::Runtime::ASM::cmpwi(context->r8, 0x8);
/*8045C848 00459648*/ PPC::Runtime::ASM::bge(.L_8045C85C);
/*8045C84C 0045964C*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r8);
/*8045C850 00459650*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r4));
/*8045C854 00459654*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8045C858 00459658*/ PPC::Runtime::ASM::bne(.L_8045C814);
RUNTIME_PPC_JUMP_LABEL(.L_8045C85C, 0x8045C85C) //this is a jump label
/*8045C85C 0045965C*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*8045C860 00459660*/ PPC::Runtime::ASM::beq(.L_8045C868);
/*8045C864 00459664*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x200);
RUNTIME_PPC_JUMP_LABEL(.L_8045C868, 0x8045C868) //this is a jump label
/*8045C868 00459668*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8045C86C 0045966C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*8045C870 00459670*/ PPC::Runtime::ASM::add(context->r3, context->r5, context->r6);
/*8045C874 00459674*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x70);
/*8045C878 00459678*/ PPC::Runtime::ASM::blr();
}