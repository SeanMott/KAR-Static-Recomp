//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EA084.hpp"
#include "fn_killWhispy.hpp"



void fn_801037D4(PPC::Runtime::GCContext* context)
{
/*801037D4 001005D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*801037D8 001005D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801037DC 001005DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801037E0 001005E0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801037E4 001005E4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801037E8 001005E8*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801037EC 001005EC*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801037F0 001005F0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801037F4 001005F4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801037F8 001005F8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801037FC 001005FC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80103800 00100600*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80103804 00100604*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103808 00100608*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8010380C 0010060C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r3));
/*80103810 00100610*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80103814 00100614*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF9A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103818 00100618*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8010381C 0010061C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80103820 00100620*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80103824 00100624*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80103828 00100628*/ PPC::Runtime::ASM::lwzx(context->r31, context->r3, context->r0);
/*8010382C 0010062C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f0);
/*80103830 00100630*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80103834 00100634*/ PPC::Runtime::ASM::bne(.L_80103848);
/*80103838 00100638*/ PPC::Runtime::ASM::li(context->r3, lbl_805D62D0 @ Get_MemoryOffset_SDA21);
/*8010383C 0010063C*/ PPC::Runtime::ASM::li(context->r4, 0x2ec);
/*80103840 00100640*/ PPC::Runtime::ASM::li(context->r5, lbl_805D62D8 @ Get_MemoryOffset_SDA21);
/*80103844 00100644*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80103848, 0x80103848) //this is a jump label
/*80103848 00100648*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r30));
/*8010384C 0010064C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*80103850 00100650*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80103854 00100654*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r30));
/*80103858 00100658*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*8010385C 0010065C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF9A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103860 00100660*/ PPC::Runtime::ASM::fsubs(context->f30, context->f3, context->f2);
/*80103864 00100664*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r30));
/*80103868 00100668*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*8010386C 0010066C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r30));
/*80103870 00100670*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r30));
/*80103874 00100674*/ PPC::Runtime::ASM::fnmsubs(context->f2, context->f30, context->f3, context->f2);
/*80103878 00100678*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r30));
/*8010387C 0010067C*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*80103880 00100680*/ PPC::Runtime::ASM::fadds(context->f1, context->f3, context->f1);
/*80103884 00100684*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r30));
/*80103888 00100688*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r30));
/*8010388C 0010068C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80103890 00100690*/ PPC::Runtime::ASM::bge(.L_801038A8);
/*80103894 00100694*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF9AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103898 00100698*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8010389C 0010069C*/ PPC::Runtime::ASM::ble(.L_801038A8);
/*801038A0 001006A0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801038A4 001006A4*/ PPC::Runtime::ASM::b(.L_801038AC);
RUNTIME_PPC_JUMP_LABEL(.L_801038A8, 0x801038A8) //this is a jump label
/*801038A8 001006A8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801038AC, 0x801038AC) //this is a jump label
/*801038AC 001006AC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801038B0 001006B0*/ PPC::Runtime::ASM::bne(.L_801039EC);
/*801038B4 001006B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r30));
/*801038B8 001006B8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF9A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801038BC 001006BC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801038C0 001006C0*/ PPC::Runtime::ASM::bge(.L_801038D8);
/*801038C4 001006C4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF9AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801038C8 001006C8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801038CC 001006CC*/ PPC::Runtime::ASM::ble(.L_801038D8);
/*801038D0 001006D0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801038D4 001006D4*/ PPC::Runtime::ASM::b(.L_801038DC);
RUNTIME_PPC_JUMP_LABEL(.L_801038D8, 0x801038D8) //this is a jump label
/*801038D8 001006D8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801038DC, 0x801038DC) //this is a jump label
/*801038DC 001006DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801038E0 001006E0*/ PPC::Runtime::ASM::bne(.L_80103918);
/*801038E4 001006E4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r30));
/* 801038E8 001006E8  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*801038EC 001006EC*/ PPC::Runtime::ASM::beq(.L_80103918);
/*801038F0 001006F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r30));
/*801038F4 001006F4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801038F8 001006F8*/ PPC::Runtime::ASM::ble(.L_80103918);
/*801038FC 001006FC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x118);
/*80103900 00100700*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80103904 00100704*/ PPC::Runtime::ASM::bl(fn_800EA084);
/*80103908 00100708*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r30));
/*8010390C 0010070C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80103910 00100710*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*80103914 00100714*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80103918, 0x80103918) //this is a jump label
/*80103918 00100718*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r30));
/*8010391C 0010071C*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f0);
/*80103920 00100720*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f31);
/*80103924 00100724*/ PPC::Runtime::ASM::ble(.L_80103938);
/*80103928 00100728*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF998 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010392C 0010072C*/ PPC::Runtime::ASM::fmr(context->f30, context->f31);
/*80103930 00100730*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r30));
/*80103934 00100734*/ PPC::Runtime::ASM::b(.L_80103950);
RUNTIME_PPC_JUMP_LABEL(.L_80103938, 0x80103938) //this is a jump label
/*80103938 00100738*/ PPC::Runtime::ASM::fneg(context->f1, context->f31);
/*8010393C 0010073C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f1);
/*80103940 00100740*/ PPC::Runtime::ASM::bge(.L_80103950);
/*80103944 00100744*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF998 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103948 00100748*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*8010394C 0010074C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80103950, 0x80103950) //this is a jump label
/*80103950 00100750*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r30));
/*80103954 00100754*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80103958 00100758*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f0);
/*8010395C 0010075C*/ PPC::Runtime::ASM::bne(.L_80103970);
/*80103960 00100760*/ PPC::Runtime::ASM::li(context->r3, lbl_805D62D0 @ Get_MemoryOffset_SDA21);
/*80103964 00100764*/ PPC::Runtime::ASM::li(context->r4, 0x2a4);
/*80103968 00100768*/ PPC::Runtime::ASM::li(context->r5, lbl_805D62D8 @ Get_MemoryOffset_SDA21);
/*8010396C 0010076C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80103970, 0x80103970) //this is a jump label
/*80103970 00100770*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80103974 00100774*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*80103978 00100778*/ PPC::Runtime::ASM::beq(.L_80103990);
/*8010397C 0010077C*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1018 @ Get_MemoryOffset_HighBit);
/*80103980 00100780*/ PPC::Runtime::ASM::li(context->r3, lbl_805D62D0 @ Get_MemoryOffset_SDA21);
/*80103984 00100784*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1018 @ Get_MemoryOffset_LowBit);
/*80103988 00100788*/ PPC::Runtime::ASM::li(context->r4, 0x2a5);
/*8010398C 0010078C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80103990, 0x80103990) //this is a jump label
/*80103990 00100790*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80103994 00100794*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80103998 00100798*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8010399C 0010079C*/ PPC::Runtime::ASM::bne(.L_80103A4C);
/*801039A0 001007A0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801039A4 001007A4*/ PPC::Runtime::ASM::beq(.L_80103A4C);
/*801039A8 001007A8*/ PPC::Runtime::ASM::bne(.L_801039BC);
/*801039AC 001007AC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D62D0 @ Get_MemoryOffset_SDA21);
/*801039B0 001007B0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801039B4 001007B4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D62D8 @ Get_MemoryOffset_SDA21);
/*801039B8 001007B8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801039BC, 0x801039BC) //this is a jump label
/*801039BC 001007BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801039C0 001007C0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801039C4 001007C4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801039C8 001007C8*/ PPC::Runtime::ASM::bne(.L_801039D8);
/*801039CC 001007CC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801039D0 001007D0*/ PPC::Runtime::ASM::beq(.L_801039D8);
/*801039D4 001007D4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801039D8, 0x801039D8) //this is a jump label
/*801039D8 001007D8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801039DC 001007DC*/ PPC::Runtime::ASM::bne(.L_80103A4C);
/*801039E0 001007E0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801039E4 001007E4*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
/*801039E8 001007E8*/ PPC::Runtime::ASM::b(.L_80103A4C);
RUNTIME_PPC_JUMP_LABEL(.L_801039EC, 0x801039EC) //this is a jump label
/*801039EC 001007EC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r30));
/*801039F0 001007F0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF9A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801039F4 001007F4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801039F8 001007F8*/ PPC::Runtime::ASM::bge(.L_80103A10);
/*801039FC 001007FC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF9AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103A00 00100800*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80103A04 00100804*/ PPC::Runtime::ASM::ble(.L_80103A10);
/*80103A08 00100808*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80103A0C 0010080C*/ PPC::Runtime::ASM::b(.L_80103A14);
RUNTIME_PPC_JUMP_LABEL(.L_80103A10, 0x80103A10) //this is a jump label
/*80103A10 00100810*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80103A14, 0x80103A14) //this is a jump label
/*80103A14 00100814*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80103A18 00100818*/ PPC::Runtime::ASM::beq(.L_80103A4C);
/*80103A1C 0010081C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF9A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103A20 00100820*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r28));
/*80103A24 00100824*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*80103A28 00100828*/ PPC::Runtime::ASM::fneg(context->f0, context->f1);
/*80103A2C 0010082C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f30);
/*80103A30 00100830*/ PPC::Runtime::ASM::bge(.L_80103A4C);
/*80103A34 00100834*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f1);
/*80103A38 00100838*/ PPC::Runtime::ASM::bge(.L_80103A4C);
/*80103A3C 0010083C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r30));
/*80103A40 00100840*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80103A44 00100844*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*80103A48 00100848*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80103A4C, 0x80103A4C) //this is a jump label
/*80103A4C 0010084C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF998 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103A50 00100850*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80103A54 00100854*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF9A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103A58 00100858*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80103A5C 0010085C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r30));
/*80103A60 00100860*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80103A64 00100864*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80103A68 00100868*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80103A6C 0010086C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80103A70 00100870*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80103A74 00100874*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80103A78 00100878*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*80103A7C 0010087C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80103A80 00100880*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80103A84 00100884*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80103A88 00100888*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80103A8C 0010088C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80103A90 00100890*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80103A94 00100894*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80103A98 00100898*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80103A9C 0010089C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80103AA0 001008A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80103AA4 001008A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80103AA8 001008A8*/ PPC::Runtime::ASM::blr();
}