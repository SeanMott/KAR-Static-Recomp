//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80063F8C.hpp"
#include "fn_80062CA4.hpp"
#include "fn_8022CCE8.hpp"
#include "fn_8022CDAC.hpp"
#include "fn_80253CE4.hpp"
#include "fn_8022FB58.hpp"
#include "fn_8022CDAC.hpp"
#include "fn_8022CD8C.hpp"
#include "fn_8022CCE8.hpp"
#include "fn_8022CCC8.hpp"



void fn_8019D55C(PPC::Runtime::GCContext* context)
{
/*8019D55C 0019A35C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xa0, context->r1));
/*8019D560 0019A360*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019D564 0019A364*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*8019D568 0019A368*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8019D56C 0019A36C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*8019D570 0019A370*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8019D574 0019A374*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8019D578 0019A378*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8019D57C 0019A37C*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8019D580 0019A380*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8019D584 0019A384*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8019D588 0019A388*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8019D58C 0019A38C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8019D590 0019A390*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8019D594 0019A394*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8019D598 0019A398*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8019D59C 0019A39C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8019D5A0 0019A3A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x59c, context->r3));
/*8019D5A4 0019A3A4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r3));
/*8019D5A8 0019A3A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r3));
/*8019D5AC 0019A3AC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8019D5B0 0019A3B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r30));
/*8019D5B4 0019A3B4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8019D5B8 0019A3B8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8019D5BC 0019A3BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8019D5C0 0019A3C0*/ PPC::Runtime::ASM::bne(.L_8019D5E8);
/*8019D5C4 0019A3C4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r30));
/*8019D5C8 0019A3C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r30));
/*8019D5CC 0019A3CC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r30));
/*8019D5D0 0019A3D0*/ PPC::Runtime::ASM::fneg(context->f2, context->f2);
/*8019D5D4 0019A3D4*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
/*8019D5D8 0019A3D8*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*8019D5DC 0019A3DC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8019D5E0 0019A3E0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8019D5E4 0019A3E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8019D5E8, 0x8019D5E8) //this is a jump label
/*8019D5E8 0019A3E8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8019D5EC 0019A3EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8019D5F0 0019A3F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8019D5F4 0019A3F4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019D5F8 0019A3F8*/ PPC::Runtime::ASM::lfs(context->f28, STRUCT_FLOAT_COUNT_1805E11B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019D5FC 0019A3FC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8019D600 0019A400*/ PPC::Runtime::ASM::fmr(context->f31, context->f28);
/*8019D604 0019A404*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019D608 0019A408*/ PPC::Runtime::ASM::fmr(context->f30, context->f28);
/*8019D60C 0019A40C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x59c, context->r30));
/*8019D610 0019A410*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8019D614 0019A414*/ PPC::Runtime::ASM::beq(.L_8019D63C);
/*8019D618 0019A418*/ PPC::Runtime::ASM::bge(.L_8019D628);
/*8019D61C 0019A41C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8019D620 0019A420*/ PPC::Runtime::ASM::bge(.L_8019D648);
/*8019D624 0019A424*/ PPC::Runtime::ASM::b(.L_8019D654);
RUNTIME_PPC_JUMP_LABEL(.L_8019D628, 0x8019D628) //this is a jump label
/*8019D628 0019A428*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8019D62C 0019A42C*/ PPC::Runtime::ASM::bge(.L_8019D654);
/*8019D630 0019A430*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019D634 0019A434*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x204);
/*8019D638 0019A438*/ PPC::Runtime::ASM::b(.L_8019D658);
RUNTIME_PPC_JUMP_LABEL(.L_8019D63C, 0x8019D63C) //this is a jump label
/*8019D63C 0019A43C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019D640 0019A440*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x1ec);
/*8019D644 0019A444*/ PPC::Runtime::ASM::b(.L_8019D658);
RUNTIME_PPC_JUMP_LABEL(.L_8019D648, 0x8019D648) //this is a jump label
/*8019D648 0019A448*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019D64C 0019A44C*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x1d4);
/*8019D650 0019A450*/ PPC::Runtime::ASM::b(.L_8019D658);
RUNTIME_PPC_JUMP_LABEL(.L_8019D654, 0x8019D654) //this is a jump label
/*8019D654 0019A454*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8019D658, 0x8019D658) //this is a jump label
/*8019D658 0019A458*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x598, context->r30));
/*8019D65C 0019A45C*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*8019D660 0019A460*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 8019D664 0019A464  57 80 07 FF */ clrlwi. context->r0 , context->r28 , 31
/*8019D668 0019A468*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E11BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019D66C 0019A46C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r3));
/*8019D670 0019A470*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*8019D674 0019A474*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f1);
/*8019D678 0019A478*/ PPC::Runtime::ASM::beq(.L_8019D680);
/*8019D67C 0019A47C*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_8019D680, 0x8019D680) //this is a jump label
/*8019D680 0019A480*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8019D684 0019A484*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8019D688 0019A488*/ PPC::Runtime::ASM::bl(fn_80063F8C);
/*8019D68C 0019A48C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8019D690 0019A490*/ PPC::Runtime::ASM::beq(.L_8019D6D8);
/*8019D694 0019A494*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8019D698 0019A498*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8019D69C 0019A49C*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*8019D6A0 0019A4A0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f31, context->f30);
/*8019D6A4 0019A4A4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E11BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019D6A8 0019A4A8*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8019D6AC 0019A4AC*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8019D6B0 0019A4B0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f0, context->f1, context->f30);
/*8019D6B4 0019A4B4*/ PPC::Runtime::ASM::fmuls(context->f30, context->f2, context->f0);
/*8019D6B8 0019A4B8*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*8019D6BC 0019A4BC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f29, context->f31);
/*8019D6C0 0019A4C0*/ PPC::Runtime::ASM::lfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8019D6C4 0019A4C4*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8019D6C8 0019A4C8*/ PPC::Runtime::ASM::fmadds(context->f31, context->f0, context->f1, context->f31);
/*8019D6CC 0019A4CC*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*8019D6D0 0019A4D0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f28, context->f29);
/*8019D6D4 0019A4D4*/ PPC::Runtime::ASM::fmadds(context->f28, context->f0, context->f1, context->f29);
RUNTIME_PPC_JUMP_LABEL(.L_8019D6D8, 0x8019D6D8) //this is a jump label
/*8019D6D8 0019A4D8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8019D6DC 0019A4DC*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*8019D6E0 0019A4E0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E11B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019D6E4 0019A4E4*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*8019D6E8 0019A4E8*/ PPC::Runtime::ASM::beq(.L_8019D740);
/*8019D6EC 0019A4EC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8019D6F0 0019A4F0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*8019D6F4 0019A4F4*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*8019D6F8 0019A4F8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8019D6FC 0019A4FC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8019D700 0019A500*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8019D704 0019A504*/ PPC::Runtime::ASM::fmuls(context->f3, context->f2, context->f28);
/*8019D708 0019A508*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f28);
/*8019D70C 0019A50C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f28);
/*8019D710 0019A510*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8019D714 0019A514*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8019D718 0019A518*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8019D71C 0019A51C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r30));
/*8019D720 0019A520*/ PPC::Runtime::ASM::fadds(context->f0, context->f3, context->f0);
/*8019D724 0019A524*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8019D728 0019A528*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r30));
/*8019D72C 0019A52C*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*8019D730 0019A530*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8019D734 0019A534*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r30));
/*8019D738 0019A538*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*8019D73C 0019A53C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8019D740, 0x8019D740) //this is a jump label
/*8019D740 0019A540*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8019D744 0019A544*/ PPC::Runtime::ASM::bl(fn_8022CCE8);
/*8019D748 0019A548*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8019D74C 0019A54C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8019D750 0019A550*/ PPC::Runtime::ASM::bl(fn_8022CDAC);
/*8019D754 0019A554*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8019D758 0019A558*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8019D75C 0019A55C*/ PPC::Runtime::ASM::slw(context->r0, context->r4, context->r8);
/*8019D760 0019A560*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*8019D764 0019A564*/ PPC::Runtime::ASM::and.(context->r0, context->r29, context->r0);
/*8019D768 0019A568*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8019D76C 0019A56C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8019D770 0019A570*/ PPC::Runtime::ASM::slwi(context->r0, context->r8, 2);
/*8019D774 0019A574*/ PPC::Runtime::ASM::addi(context->r9, context->r1, 0x38);
/*8019D778 0019A578*/ PPC::Runtime::ASM::mr(context->r6, context->r7);
/*8019D77C 0019A57C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8019D780 0019A580*/ PPC::Runtime::ASM::add(context->r9, context->r9, context->r0);
/*8019D784 0019A584*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8019D788 0019A588*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8019D78C 0019A58C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8019D790 0019A590*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8019D794 0019A594*/ PPC::Runtime::ASM::beq(.L_8019D7A8);
/*8019D798 0019A598*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*8019D79C 0019A59C*/ PPC::Runtime::ASM::mr(context->r7, context->r4);
/*8019D7A0 0019A5A0*/ PPC::Runtime::ASM::mr(context->r6, context->r4);
/*8019D7A4 0019A5A4*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8019D7A8, 0x8019D7A8) //this is a jump label
/*8019D7A8 0019A5A8*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*8019D7AC 0019A5AC*/ PPC::Runtime::ASM::slw(context->r0, context->r4, context->r8);
/*8019D7B0 0019A5B0*/ PPC::Runtime::ASM::and.(context->r0, context->r29, context->r0);
/*8019D7B4 0019A5B4*/ PPC::Runtime::ASM::beq(.L_8019D7C8);
/*8019D7B8 0019A5B8*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*8019D7BC 0019A5BC*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x4);
/*8019D7C0 0019A5C0*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8019D7C4 0019A5C4*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8019D7C8, 0x8019D7C8) //this is a jump label
/*8019D7C8 0019A5C8*/ PPC::Runtime::ASM::li(context->r8, 0x2);
/*8019D7CC 0019A5CC*/ PPC::Runtime::ASM::slw(context->r0, context->r4, context->r8);
/*8019D7D0 0019A5D0*/ PPC::Runtime::ASM::and.(context->r0, context->r29, context->r0);
/*8019D7D4 0019A5D4*/ PPC::Runtime::ASM::beq(.L_8019D7E4);
/*8019D7D8 0019A5D8*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*8019D7DC 0019A5DC*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8019D7E0 0019A5E0*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8019D7E4, 0x8019D7E4) //this is a jump label
/*8019D7E4 0019A5E4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8019D7E8 0019A5E8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8019D7EC 0019A5EC*/ PPC::Runtime::ASM::slw(context->r0, context->r4, context->r0);
/*8019D7F0 0019A5F0*/ PPC::Runtime::ASM::slwi(context->r5, context->r7, 2);
/*8019D7F4 0019A5F4*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r0);
/*8019D7F8 0019A5F8*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x38);
/*8019D7FC 0019A5FC*/ PPC::Runtime::ASM::add(context->r7, context->r7, context->r5);
/*8019D800 0019A600*/ PPC::Runtime::ASM::beq(.L_8019D814);
/*8019D804 0019A604*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8019D808 0019A608*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*8019D80C 0019A60C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*8019D810 0019A610*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8019D814, 0x8019D814) //this is a jump label
/*8019D814 0019A614*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8019D818 0019A618*/ PPC::Runtime::ASM::slw(context->r0, context->r4, context->r0);
/*8019D81C 0019A61C*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r0);
/*8019D820 0019A620*/ PPC::Runtime::ASM::beq(.L_8019D834);
/*8019D824 0019A624*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*8019D828 0019A628*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*8019D82C 0019A62C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*8019D830 0019A630*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8019D834, 0x8019D834) //this is a jump label
/*8019D834 0019A634*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8019D838 0019A638*/ PPC::Runtime::ASM::slw(context->r0, context->r4, context->r0);
/*8019D83C 0019A63C*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r0);
/*8019D840 0019A640*/ PPC::Runtime::ASM::beq(.L_8019D850);
/*8019D844 0019A644*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*8019D848 0019A648*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*8019D84C 0019A64C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_8019D850, 0x8019D850) //this is a jump label
/*8019D850 0019A650*/ PPC::Runtime::ASM::mr(context->r3, context->r6);
/*8019D854 0019A654*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8019D858 0019A658*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*8019D85C 0019A65C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*8019D860 0019A660*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*8019D864 0019A664*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x37);
/*8019D868 0019A668*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a0, context->r30));
/*8019D86C 0019A66C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a0, context->r30));
/*8019D870 0019A670*/ PPC::Runtime::ASM::cmpwi(context->r28, -0x1);
/*8019D874 0019A674*/ PPC::Runtime::ASM::beq(.L_8019D970);
/*8019D878 0019A678*/ PPC::Runtime::ASM::lwz(context->r9, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019D87C 0019A67C*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*8019D880 0019A680*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8019D884 0019A684*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/*8019D888 0019A688*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r9));
/*8019D88C 0019A68C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8019D890 0019A690*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8019D894 0019A694*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8019D898 0019A698*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8019D89C 0019A69C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019D8A0 0019A6A0*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x14);
/*8019D8A4 0019A6A4*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8019D8A8 0019A6A8*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019D8AC 0019A6AC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019D8B0 0019A6B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8019D8B4 0019A6B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r9));
/*8019D8B8 0019A6B8*/ PPC::Runtime::ASM::fadds(context->f0, context->f3, context->f0);
/*8019D8BC 0019A6BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019D8C0 0019A6C0*/ PPC::Runtime::ASM::bl(fn_80253CE4);
/*8019D8C4 0019A6C4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8019D8C8 0019A6C8*/ PPC::Runtime::ASM::beq(.L_8019D8EC);
/*8019D8CC 0019A6CC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8019D8D0 0019A6D0*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*8019D8D4 0019A6D4*/ PPC::Runtime::ASM::bl(fn_8022FB58);
/*8019D8D8 0019A6D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x594, context->r30));
/*8019D8DC 0019A6DC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8019D8E0 0019A6E0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8019D8E4 0019A6E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x594, context->r30));
/*8019D8E8 0019A6E8*/ PPC::Runtime::ASM::b(.L_8019D8F0);
RUNTIME_PPC_JUMP_LABEL(.L_8019D8EC, 0x8019D8EC) //this is a jump label
/*8019D8EC 0019A6EC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8019D8F0, 0x8019D8F0) //this is a jump label
/*8019D8F0 0019A6F0*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8019D8F4 0019A6F4*/ PPC::Runtime::ASM::beq(.L_8019D970);
/*8019D8F8 0019A6F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a0, context->r30));
/*8019D8FC 0019A6FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3a);
/*8019D900 0019A700*/ PPC::Runtime::ASM::blt(.L_8019D92C);
/*8019D904 0019A704*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8019D908 0019A708*/ PPC::Runtime::ASM::bl(fn_8022CDAC);
/*8019D90C 0019A70C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a0, context->r30));
/*8019D910 0019A710*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8019D914 0019A714*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x3a);
/*8019D918 0019A718*/ PPC::Runtime::ASM::slw(context->r0, context->r5, context->r0);
/*8019D91C 0019A71C*/ PPC::Runtime::ASM::xor(context->r4, context->r3, context->r0);
/*8019D920 0019A720*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8019D924 0019A724*/ PPC::Runtime::ASM::bl(fn_8022CD8C);
/*8019D928 0019A728*/ PPC::Runtime::ASM::b(.L_8019D950);
RUNTIME_PPC_JUMP_LABEL(.L_8019D92C, 0x8019D92C) //this is a jump label
/*8019D92C 0019A72C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8019D930 0019A730*/ PPC::Runtime::ASM::bl(fn_8022CCE8);
/*8019D934 0019A734*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a0, context->r30));
/*8019D938 0019A738*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8019D93C 0019A73C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x37);
/*8019D940 0019A740*/ PPC::Runtime::ASM::slw(context->r0, context->r5, context->r0);
/*8019D944 0019A744*/ PPC::Runtime::ASM::xor(context->r4, context->r3, context->r0);
/*8019D948 0019A748*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8019D94C 0019A74C*/ PPC::Runtime::ASM::bl(fn_8022CCC8);
RUNTIME_PPC_JUMP_LABEL(.L_8019D950, 0x8019D950) //this is a jump label
/*8019D950 0019A750*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019D954 0019A754*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21c, context->r3));
/*8019D958 0019A758*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x590, context->r30));
/*8019D95C 0019A75C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a4, context->r30));
/*8019D960 0019A760*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x598, context->r30));
/*8019D964 0019A764*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8019D968 0019A768*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a4, context->r30));
/*8019D96C 0019A76C*/ PPC::Runtime::ASM::subi(context->r31, context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8019D970, 0x8019D970) //this is a jump label
/*8019D970 0019A770*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8019D974 0019A774*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*8019D978 0019A778*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8019D97C 0019A77C*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8019D980 0019A780*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8019D984 0019A784*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8019D988 0019A788*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8019D98C 0019A78C*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8019D990 0019A790*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8019D994 0019A794*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8019D998 0019A798*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8019D99C 0019A79C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8019D9A0 0019A7A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*8019D9A4 0019A7A4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8019D9A8 0019A7A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019D9AC 0019A7AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xa0);
/*8019D9B0 0019A7B0*/ PPC::Runtime::ASM::blr();
}