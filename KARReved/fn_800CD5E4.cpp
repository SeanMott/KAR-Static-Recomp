//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018D9C0.hpp"
#include "fn_8018D9C0.hpp"
#include "fn_8018D9C0.hpp"



void fn_800CD5E4(PPC::Runtime::GCContext* context)
{
/*800CD5E4 000CA3E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800CD5E8 000CA3E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800CD5EC 000CA3EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800CD5F0 000CA3F0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800CD5F4 000CA3F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800CD5F8 000CA3F8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800CD5FC 000CA3FC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800CD600 000CA400*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800CD604 000CA404*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r4));
/*800CD608 000CA408*/ PPC::Runtime::ASM::addi(context->r31, context->r4, 0xd0);
/*800CD60C 000CA40C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r4));
/*800CD610 000CA410*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r3, 30, 27, 28);
/*800CD614 000CA414*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r4));
/*800CD618 000CA418*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r4));
/* 800CD61C 000CA41C  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*800CD620 000CA420*/ PPC::Runtime::ASM::beq(.L_800CD8B8);
/*800CD624 000CA424*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800CD628 000CA428*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*800CD62C 000CA42C*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetEyePosition);
/*800CD630 000CA430*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CD634 000CA434*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*800CD638 000CA438*/ PPC::Runtime::ASM::b(.L_800CD6F4);
RUNTIME_PPC_JUMP_LABEL(.L_800CD63C, 0x800CD63C) //this is a jump label
/*800CD63C 000CA43C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*800CD640 000CA440*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*800CD644 000CA444*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*800CD648 000CA448*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r3));
/*800CD64C 000CA44C*/ PPC::Runtime::ASM::bl(fn_8018D9C0);
/*800CD650 000CA450*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800CD654 000CA454*/ PPC::Runtime::ASM::beq(.L_800CD6F0);
/*800CD658 000CA458*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CD65C 000CA45C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800CD660 000CA460*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x4);
/*800CD664 000CA464*/ PPC::Runtime::ASM::blt(.L_800CD670);
/*800CD668 000CA468*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800CD66C 000CA46C*/ PPC::Runtime::ASM::b(.L_800CD6E8);
RUNTIME_PPC_JUMP_LABEL(.L_800CD670, 0x800CD670) //this is a jump label
/*800CD670 000CA470*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800CD674 000CA474*/ PPC::Runtime::ASM::mtctr(context->r5);
/*800CD678 000CA478*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*800CD67C 000CA47C*/ PPC::Runtime::ASM::ble(.L_800CD6A8);
RUNTIME_PPC_JUMP_LABEL(.L_800CD680, 0x800CD680) //this is a jump label
/*800CD680 000CA480*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800CD684 000CA484*/ PPC::Runtime::ASM::cmpw(context->r0, context->r4);
/*800CD688 000CA488*/ PPC::Runtime::ASM::bne(.L_800CD6A0);
/*800CD68C 000CA48C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800CD690 000CA490*/ PPC::Runtime::ASM::cmplw(context->r0, context->r30);
/*800CD694 000CA494*/ PPC::Runtime::ASM::bne(.L_800CD6A0);
/*800CD698 000CA498*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800CD69C 000CA49C*/ PPC::Runtime::ASM::b(.L_800CD6E8);
RUNTIME_PPC_JUMP_LABEL(.L_800CD6A0, 0x800CD6A0) //this is a jump label
/*800CD6A0 000CA4A0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*800CD6A4 000CA4A4*/ PPC::Runtime::ASM::bdnz(.L_800CD680);
RUNTIME_PPC_JUMP_LABEL(.L_800CD6A8, 0x800CD6A8) //this is a jump label
/*800CD6A8 000CA4A8*/ PPC::Runtime::ASM::slwi(context->r3, context->r5, 3);
/*800CD6AC 000CA4AC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x8);
/*800CD6B0 000CA4B0*/ PPC::Runtime::ASM::stwx(context->r4, context->r31, context->r0);
/*800CD6B4 000CA4B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CD6B8 000CA4B8*/ PPC::Runtime::ASM::slwi(context->r3, context->r0, 3);
/*800CD6BC 000CA4BC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0xc);
/*800CD6C0 000CA4C0*/ PPC::Runtime::ASM::stwx(context->r30, context->r31, context->r0);
/*800CD6C4 000CA4C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CD6C8 000CA4C8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800CD6CC 000CA4CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CD6D0 000CA4D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CD6D4 000CA4D4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*800CD6D8 000CA4D8*/ PPC::Runtime::ASM::bge(.L_800CD6E4);
/*800CD6DC 000CA4DC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800CD6E0 000CA4E0*/ PPC::Runtime::ASM::b(.L_800CD6E8);
RUNTIME_PPC_JUMP_LABEL(.L_800CD6E4, 0x800CD6E4) //this is a jump label
/*800CD6E4 000CA4E4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800CD6E8, 0x800CD6E8) //this is a jump label
/*800CD6E8 000CA4E8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800CD6EC 000CA4EC*/ PPC::Runtime::ASM::beq(.L_800CD8A4);
RUNTIME_PPC_JUMP_LABEL(.L_800CD6F0, 0x800CD6F0) //this is a jump label
/*800CD6F0 000CA4F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800CD6F4, 0x800CD6F4) //this is a jump label
/*800CD6F4 000CA4F4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800CD6F8 000CA4F8*/ PPC::Runtime::ASM::bne(.L_800CD63C);
/*800CD6FC 000CA4FC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CD700 000CA500*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*800CD704 000CA504*/ PPC::Runtime::ASM::b(.L_800CD7C4);
RUNTIME_PPC_JUMP_LABEL(.L_800CD708, 0x800CD708) //this is a jump label
/*800CD708 000CA508*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*800CD70C 000CA50C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*800CD710 000CA510*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*800CD714 000CA514*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r29));
/*800CD718 000CA518*/ PPC::Runtime::ASM::bl(fn_8018D9C0);
/*800CD71C 000CA51C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800CD720 000CA520*/ PPC::Runtime::ASM::beq(.L_800CD7C0);
/*800CD724 000CA524*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CD728 000CA528*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800CD72C 000CA52C*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x4);
/*800CD730 000CA530*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800CD734 000CA534*/ PPC::Runtime::ASM::blt(.L_800CD740);
/*800CD738 000CA538*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800CD73C 000CA53C*/ PPC::Runtime::ASM::b(.L_800CD7B8);
RUNTIME_PPC_JUMP_LABEL(.L_800CD740, 0x800CD740) //this is a jump label
/*800CD740 000CA540*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800CD744 000CA544*/ PPC::Runtime::ASM::mtctr(context->r6);
/*800CD748 000CA548*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*800CD74C 000CA54C*/ PPC::Runtime::ASM::ble(.L_800CD778);
RUNTIME_PPC_JUMP_LABEL(.L_800CD750, 0x800CD750) //this is a jump label
/*800CD750 000CA550*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800CD754 000CA554*/ PPC::Runtime::ASM::cmpw(context->r0, context->r4);
/*800CD758 000CA558*/ PPC::Runtime::ASM::bne(.L_800CD770);
/*800CD75C 000CA55C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800CD760 000CA560*/ PPC::Runtime::ASM::cmplw(context->r0, context->r5);
/*800CD764 000CA564*/ PPC::Runtime::ASM::bne(.L_800CD770);
/*800CD768 000CA568*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800CD76C 000CA56C*/ PPC::Runtime::ASM::b(.L_800CD7B8);
RUNTIME_PPC_JUMP_LABEL(.L_800CD770, 0x800CD770) //this is a jump label
/*800CD770 000CA570*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*800CD774 000CA574*/ PPC::Runtime::ASM::bdnz(.L_800CD750);
RUNTIME_PPC_JUMP_LABEL(.L_800CD778, 0x800CD778) //this is a jump label
/*800CD778 000CA578*/ PPC::Runtime::ASM::slwi(context->r3, context->r6, 3);
/*800CD77C 000CA57C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x8);
/*800CD780 000CA580*/ PPC::Runtime::ASM::stwx(context->r4, context->r31, context->r0);
/*800CD784 000CA584*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CD788 000CA588*/ PPC::Runtime::ASM::slwi(context->r3, context->r0, 3);
/*800CD78C 000CA58C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0xc);
/*800CD790 000CA590*/ PPC::Runtime::ASM::stwx(context->r5, context->r31, context->r0);
/*800CD794 000CA594*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CD798 000CA598*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800CD79C 000CA59C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CD7A0 000CA5A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CD7A4 000CA5A4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*800CD7A8 000CA5A8*/ PPC::Runtime::ASM::bge(.L_800CD7B4);
/*800CD7AC 000CA5AC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800CD7B0 000CA5B0*/ PPC::Runtime::ASM::b(.L_800CD7B8);
RUNTIME_PPC_JUMP_LABEL(.L_800CD7B4, 0x800CD7B4) //this is a jump label
/*800CD7B4 000CA5B4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800CD7B8, 0x800CD7B8) //this is a jump label
/*800CD7B8 000CA5B8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800CD7BC 000CA5BC*/ PPC::Runtime::ASM::beq(.L_800CD8A4);
RUNTIME_PPC_JUMP_LABEL(.L_800CD7C0, 0x800CD7C0) //this is a jump label
/*800CD7C0 000CA5C0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800CD7C4, 0x800CD7C4) //this is a jump label
/*800CD7C4 000CA5C4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800CD7C8 000CA5C8*/ PPC::Runtime::ASM::bne(.L_800CD708);
/*800CD7CC 000CA5CC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CD7D0 000CA5D0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*800CD7D4 000CA5D4*/ PPC::Runtime::ASM::b(.L_800CD890);
RUNTIME_PPC_JUMP_LABEL(.L_800CD7D8, 0x800CD7D8) //this is a jump label
/*800CD7D8 000CA5D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*800CD7DC 000CA5DC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*800CD7E0 000CA5E0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*800CD7E4 000CA5E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r3));
/*800CD7E8 000CA5E8*/ PPC::Runtime::ASM::bl(fn_8018D9C0);
/*800CD7EC 000CA5EC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800CD7F0 000CA5F0*/ PPC::Runtime::ASM::beq(.L_800CD88C);
/*800CD7F4 000CA5F4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CD7F8 000CA5F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800CD7FC 000CA5FC*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x4);
/*800CD800 000CA600*/ PPC::Runtime::ASM::blt(.L_800CD80C);
/*800CD804 000CA604*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800CD808 000CA608*/ PPC::Runtime::ASM::b(.L_800CD884);
RUNTIME_PPC_JUMP_LABEL(.L_800CD80C, 0x800CD80C) //this is a jump label
/*800CD80C 000CA60C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800CD810 000CA610*/ PPC::Runtime::ASM::mtctr(context->r5);
/*800CD814 000CA614*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*800CD818 000CA618*/ PPC::Runtime::ASM::ble(.L_800CD844);
RUNTIME_PPC_JUMP_LABEL(.L_800CD81C, 0x800CD81C) //this is a jump label
/*800CD81C 000CA61C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800CD820 000CA620*/ PPC::Runtime::ASM::cmpw(context->r0, context->r4);
/*800CD824 000CA624*/ PPC::Runtime::ASM::bne(.L_800CD83C);
/*800CD828 000CA628*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800CD82C 000CA62C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r30);
/*800CD830 000CA630*/ PPC::Runtime::ASM::bne(.L_800CD83C);
/*800CD834 000CA634*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800CD838 000CA638*/ PPC::Runtime::ASM::b(.L_800CD884);
RUNTIME_PPC_JUMP_LABEL(.L_800CD83C, 0x800CD83C) //this is a jump label
/*800CD83C 000CA63C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*800CD840 000CA640*/ PPC::Runtime::ASM::bdnz(.L_800CD81C);
RUNTIME_PPC_JUMP_LABEL(.L_800CD844, 0x800CD844) //this is a jump label
/*800CD844 000CA644*/ PPC::Runtime::ASM::slwi(context->r3, context->r5, 3);
/*800CD848 000CA648*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x8);
/*800CD84C 000CA64C*/ PPC::Runtime::ASM::stwx(context->r4, context->r31, context->r0);
/*800CD850 000CA650*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CD854 000CA654*/ PPC::Runtime::ASM::slwi(context->r3, context->r0, 3);
/*800CD858 000CA658*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0xc);
/*800CD85C 000CA65C*/ PPC::Runtime::ASM::stwx(context->r30, context->r31, context->r0);
/*800CD860 000CA660*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CD864 000CA664*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800CD868 000CA668*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CD86C 000CA66C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CD870 000CA670*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*800CD874 000CA674*/ PPC::Runtime::ASM::bge(.L_800CD880);
/*800CD878 000CA678*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800CD87C 000CA67C*/ PPC::Runtime::ASM::b(.L_800CD884);
RUNTIME_PPC_JUMP_LABEL(.L_800CD880, 0x800CD880) //this is a jump label
/*800CD880 000CA680*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800CD884, 0x800CD884) //this is a jump label
/*800CD884 000CA684*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800CD888 000CA688*/ PPC::Runtime::ASM::beq(.L_800CD8A4);
RUNTIME_PPC_JUMP_LABEL(.L_800CD88C, 0x800CD88C) //this is a jump label
/*800CD88C 000CA68C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800CD890, 0x800CD890) //this is a jump label
/*800CD890 000CA690*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800CD894 000CA694*/ PPC::Runtime::ASM::bne(.L_800CD7D8);
/*800CD898 000CA698*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CD89C 000CA69C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800CD8A0 000CA6A0*/ PPC::Runtime::ASM::ble(.L_800CD8B8);
RUNTIME_PPC_JUMP_LABEL(.L_800CD8A4, 0x800CD8A4) //this is a jump label
/*800CD8A4 000CA6A4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800CD8A8 000CA6A8*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*800CD8AC 000CA6AC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 25, 26);
/*800CD8B0 000CA6B0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800CD8B4 000CA6B4*/ PPC::Runtime::ASM::b(.L_800CD8C8);
RUNTIME_PPC_JUMP_LABEL(.L_800CD8B8, 0x800CD8B8) //this is a jump label
/*800CD8B8 000CA6B8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800CD8BC 000CA6BC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800CD8C0 000CA6C0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 25, 26);
/*800CD8C4 000CA6C4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800CD8C8, 0x800CD8C8) //this is a jump label
/*800CD8C8 000CA6C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800CD8CC 000CA6CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800CD8D0 000CA6D0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800CD8D4 000CA6D4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800CD8D8 000CA6D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800CD8DC 000CA6DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800CD8E0 000CA6E0*/ PPC::Runtime::ASM::blr();
}