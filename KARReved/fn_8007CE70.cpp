//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007CE70(PPC::Runtime::GCContext* context)
{
/*8007CE70 00079C70*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8007CE74 00079C74*/ PPC::Runtime::ASM::mflr(context->r0);
/*8007CE78 00079C78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8007CE7C, 0x8007CE7C) //this is a jump label
/*8007CE7C 00079C7C*/ PPC::Runtime::ASM::bl(fn_VIWaitForRetrace);
/*8007CE80 00079C80*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8007CE84 00079C84*/ PPC::Runtime::ASM::bl(fn_PADRead);
/*8007CE88 00079C88*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r1));
/*8007CE8C 00079C8C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8007CE90 00079C90*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8007CE94 00079C94*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x2);
/*8007CE98 00079C98*/ PPC::Runtime::ASM::beq(.L_8007CEA4);
/*8007CE9C 00079C9C*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x3);
/*8007CEA0 00079CA0*/ PPC::Runtime::ASM::bne(.L_8007CEA8);
RUNTIME_PPC_JUMP_LABEL(.L_8007CEA4, 0x8007CEA4) //this is a jump label
/*8007CEA4 00079CA4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007CEA8, 0x8007CEA8) //this is a jump label
/*8007CEA8 00079CA8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r1));
/*8007CEAC 00079CAC*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8007CEB0 00079CB0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x2);
/*8007CEB4 00079CB4*/ PPC::Runtime::ASM::beq(.L_8007CEC0);
/*8007CEB8 00079CB8*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x3);
/*8007CEBC 00079CBC*/ PPC::Runtime::ASM::bne(.L_8007CEC4);
RUNTIME_PPC_JUMP_LABEL(.L_8007CEC0, 0x8007CEC0) //this is a jump label
/*8007CEC0 00079CC0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007CEC4, 0x8007CEC4) //this is a jump label
/*8007CEC4 00079CC4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a, context->r1));
/*8007CEC8 00079CC8*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8007CECC 00079CCC*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x2);
/*8007CED0 00079CD0*/ PPC::Runtime::ASM::beq(.L_8007CEDC);
/*8007CED4 00079CD4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x3);
/*8007CED8 00079CD8*/ PPC::Runtime::ASM::bne(.L_8007CEE0);
RUNTIME_PPC_JUMP_LABEL(.L_8007CEDC, 0x8007CEDC) //this is a jump label
/*8007CEDC 00079CDC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007CEE0, 0x8007CEE0) //this is a jump label
/*8007CEE0 00079CE0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x36, context->r1));
/*8007CEE4 00079CE4*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8007CEE8 00079CE8*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x2);
/*8007CEEC 00079CEC*/ PPC::Runtime::ASM::beq(.L_8007CEF8);
/*8007CEF0 00079CF0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x3);
/*8007CEF4 00079CF4*/ PPC::Runtime::ASM::bne(.L_8007CEFC);
RUNTIME_PPC_JUMP_LABEL(.L_8007CEF8, 0x8007CEF8) //this is a jump label
/*8007CEF8 00079CF8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007CEFC, 0x8007CEFC) //this is a jump label
/*8007CEFC 00079CFC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8007CF00 00079D00*/ PPC::Runtime::ASM::beq(.L_8007CE7C);
/*8007CF04 00079D04*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r1));
/*8007CF08 00079D08*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8007CF0C 00079D0C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8007CF10 00079D10*/ PPC::Runtime::ASM::beq(.L_8007CF48);
/*8007CF14 00079D14*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r1));
/*8007CF18 00079D18*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8007CF1C 00079D1C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8007CF20 00079D20*/ PPC::Runtime::ASM::beq(.L_8007CF48);
/*8007CF24 00079D24*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a, context->r1));
/*8007CF28 00079D28*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8007CF2C 00079D2C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8007CF30 00079D30*/ PPC::Runtime::ASM::beq(.L_8007CF48);
/*8007CF34 00079D34*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x36, context->r1));
/*8007CF38 00079D38*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*8007CF3C 00079D3C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8007CF40 00079D40*/ PPC::Runtime::ASM::beq(.L_8007CF48);
/*8007CF44 00079D44*/ PPC::Runtime::ASM::li(context->r3, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8007CF48, 0x8007CF48) //this is a jump label
/*8007CF48 00079D48*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*8007CF4C 00079D4C*/ PPC::Runtime::ASM::beq(.L_8007CF60);
/*8007CF50 00079D50*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0xc);
/*8007CF54 00079D54*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8007CF58 00079D58*/ PPC::Runtime::ASM::lhzx(context->r0, context->r3, context->r0);
/*8007CF5C 00079D5C*/ PPC::Runtime::ASM::b(.L_8007CF64);
RUNTIME_PPC_JUMP_LABEL(.L_8007CF60, 0x8007CF60) //this is a jump label
/*8007CF60 00079D60*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007CF64, 0x8007CF64) //this is a jump label
/*8007CF64 00079D64*/ PPC::Runtime::ASM::sth(context->r0, SkipAddress_70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007CF68 00079D68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8007CF6C 00079D6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8007CF70 00079D70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8007CF74 00079D74*/ PPC::Runtime::ASM::blr();
}