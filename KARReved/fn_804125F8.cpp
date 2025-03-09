//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_804125F8(PPC::Runtime::GCContext* context)
{
/*804125F8 0040F3F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*804125FC 0040F3FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80412600 0040F400*/ PPC::Runtime::ASM::lis(context->r4, lbl_8058B080 @ Get_MemoryOffset_HighBit);
/*80412604 0040F404*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80412608 0040F408*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8041260C 0040F40C*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_8058B080 @ Get_MemoryOffset_LowBit);
/*80412610 0040F410*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80412614 0040F414*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80412618 0040F418*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8041261C 0040F41C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80412620 0040F420*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80412624 0040F424*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x1);
/*80412628 0040F428*/ PPC::Runtime::ASM::beq(.L_804126D8);
/*8041262C 0040F42C*/ PPC::Runtime::ASM::bge(.L_8041263C);
/*80412630 0040F430*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*80412634 0040F434*/ PPC::Runtime::ASM::bge(.L_804126C8);
/*80412638 0040F438*/ PPC::Runtime::ASM::b(.L_80412720);
RUNTIME_PPC_JUMP_LABEL(.L_8041263C, 0x8041263C) //this is a jump label
/*8041263C 0040F43C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x3);
/*80412640 0040F440*/ PPC::Runtime::ASM::bge(.L_80412720);
/*80412644 0040F444*/ PPC::Runtime::ASM::b(.L_804126EC);
/*80412648 0040F448*/ PPC::Runtime::ASM::b(.L_804126C8);
RUNTIME_PPC_JUMP_LABEL(.L_8041264C, 0x8041264C) //this is a jump label
/*8041264C 0040F44C*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*80412650 0040F450*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80412654 0040F454*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x1);
/*80412658 0040F458*/ PPC::Runtime::ASM::divw(context->r0, context->r5, context->r4);
/*8041265C 0040F45C*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r4);
/*80412660 0040F460*/ PPC::Runtime::ASM::subf(context->r4, context->r0, context->r5);
/*80412664 0040F464*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r4, 24);
/*80412668 0040F468*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8041266C 0040F46C*/ PPC::Runtime::ASM::mulli(context->r4, context->r6, 0x34);
/*80412670 0040F470*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x34);
/*80412674 0040F474*/ PPC::Runtime::ASM::add(context->r5, context->r30, context->r4);
/*80412678 0040F478*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8041267C 0040F47C*/ PPC::Runtime::ASM::add(context->r6, context->r30, context->r0);
/*80412680 0040F480*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80412684 0040F484*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*80412688 0040F488*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8041268C 0040F48C*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*80412690 0040F490*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*80412694 0040F494*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*80412698 0040F498*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*8041269C 0040F49C*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*804126A0 0040F4A0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*804126A4 0040F4A4*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*804126A8 0040F4A8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*804126AC 0040F4AC*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r5));
/*804126B0 0040F4B0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r6));
/*804126B4 0040F4B4*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*804126B8 0040F4B8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r6));
/*804126BC 0040F4BC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*804126C0 0040F4C0*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*804126C4 0040F4C4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_804126C8, 0x804126C8) //this is a jump label
/*804126C8 0040F4C8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*804126CC 0040F4CC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*804126D0 0040F4D0*/ PPC::Runtime::ASM::bgt(.L_8041264C);
/*804126D4 0040F4D4*/ PPC::Runtime::ASM::b(.L_80412720);
RUNTIME_PPC_JUMP_LABEL(.L_804126D8, 0x804126D8) //this is a jump label
/*804126D8 0040F4D8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*804126DC 0040F4DC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804126E0 0040F4E0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*804126E4 0040F4E4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*804126E8 0040F4E8*/ PPC::Runtime::ASM::b(.L_80412720);
RUNTIME_PPC_JUMP_LABEL(.L_804126EC, 0x804126EC) //this is a jump label
/*804126EC 0040F4EC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*804126F0 0040F4F0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*804126F4 0040F4F4*/ PPC::Runtime::ASM::ble(.L_80412720);
/*804126F8 0040F4F8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*804126FC 0040F4FC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80412700 0040F500*/ PPC::Runtime::ASM::beq(.L_8041270C);
/*80412704 0040F504*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80412708 0040F508*/ PPC::Runtime::ASM::b(.L_80412714);
RUNTIME_PPC_JUMP_LABEL(.L_8041270C, 0x8041270C) //this is a jump label
/*8041270C 0040F50C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80412710 0040F510*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80412714, 0x80412714) //this is a jump label
/*80412714 0040F514*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80412718 0040F518*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8041271C 0040F51C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80412720, 0x80412720) //this is a jump label
/*80412720 0040F520*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80412724 0040F524*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80412728 0040F528*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8041272C 0040F52C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80412730 0040F530*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80412734 0040F534*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80412738 0040F538*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8041273C 0040F53C*/ PPC::Runtime::ASM::blr();
}