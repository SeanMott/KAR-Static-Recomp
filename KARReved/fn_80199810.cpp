//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80199810(PPC::Runtime::GCContext* context)
{
/*80199810 00196610*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80199814 00196614*/ PPC::Runtime::ASM::mflr(context->r0);
/*80199818 00196618*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8019981C 0019661C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80199820 00196620*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80199824 00196624*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80199828 00196628*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8019982C 0019662C*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80199830 00196630*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*80199834 00196634*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80199838 00196638*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4bc, context->r3));
/*8019983C 0019663C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1154 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80199840 00196640*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r3));
/*80199844 00196644*/ PPC::Runtime::ASM::fcmpo(cr0, context->f5, context->f0);
/*80199848 00196648*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x310, context->r5));
/*8019984C 0019664C*/ PPC::Runtime::ASM::bge(.L_8019985C);
/*80199850 00196650*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80199854 00196654*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r5));
/*80199858 00196658*/ PPC::Runtime::ASM::b(.L_80199884);
RUNTIME_PPC_JUMP_LABEL(.L_8019985C, 0x8019985C) //this is a jump label
/*8019985C 0019665C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80199860 00196660*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1150 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80199864 00196664*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r5));
/*80199868 00196668*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18c, context->r5));
/*8019986C 0019666C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*80199870 00196670*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r5));
/*80199874 00196674*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80199878 00196678*/ PPC::Runtime::ASM::fdivs(context->f0, context->f5, context->f0);
/*8019987C 0019667C*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*80199880 00196680*/ PPC::Runtime::ASM::fmuls(context->f6, context->f2, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80199884, 0x80199884) //this is a jump label
/*80199884 00196684*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80199888 00196688*/ PPC::Runtime::ASM::beq(.L_80199928);
/*8019988C 0019668C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2ec, context->r3));
/*80199890 00196690*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r3));
/*80199894 00196694*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r3));
/*80199898 00196698*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8019989C 0019669C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r3));
/*801998A0 001966A0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e8, context->r3));
/* 801998A4 001966A4  54 00 F7 FF */ extrwi. context->r0 , context->r0 , 1 , 29
/*801998A8 001966A8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f4, context->r3));
/*801998AC 001966AC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*801998B0 001966B0*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f2);
/*801998B4 001966B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x330, context->r3));
/*801998B8 001966B8*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f0, context->r3));
/*801998BC 001966BC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r3));
/*801998C0 001966C0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*801998C4 001966C4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r3));
/*801998C8 001966C8*/ PPC::Runtime::ASM::fsubs(context->f3, context->f4, context->f3);
/*801998CC 001966CC*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f3, context->f0);
/*801998D0 001966D0*/ PPC::Runtime::ASM::beq(.L_801998E4);
/*801998D4 001966D4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1154 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801998D8 001966D8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801998DC 001966DC*/ PPC::Runtime::ASM::bge(.L_801998E4);
/*801998E0 001966E0*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801998E4, 0x801998E4) //this is a jump label
/*801998E4 001966E4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r3));
/* 801998E8 001966E8  54 00 EF FF */ extrwi. context->r0 , context->r0 , 1 , 28
/*801998EC 001966EC*/ PPC::Runtime::ASM::beq(.L_801998FC);
/*801998F0 001966F0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1154 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801998F4 001966F4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801998F8 001966F8*/ PPC::Runtime::ASM::blt(.L_80199928);
RUNTIME_PPC_JUMP_LABEL(.L_801998FC, 0x801998FC) //this is a jump label
/*801998FC 001966FC*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80199900 00196700*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r4));
/*80199904 00196704*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80199908 00196708*/ PPC::Runtime::ASM::ble(.L_80199914);
/*8019990C 0019670C*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
/*80199910 00196710*/ PPC::Runtime::ASM::b(.L_80199924);
RUNTIME_PPC_JUMP_LABEL(.L_80199914, 0x80199914) //this is a jump label
/*80199914 00196714*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*80199918 00196718*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8019991C 0019671C*/ PPC::Runtime::ASM::bge(.L_80199924);
/*80199920 00196720*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80199924, 0x80199924) //this is a jump label
/*80199924 00196724*/ PPC::Runtime::ASM::fadds(context->f6, context->f6, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_80199928, 0x80199928) //this is a jump label
/*80199928 00196728*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019992C 0019672C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x198, context->r4));
/*80199930 00196730*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*80199934 00196734*/ PPC::Runtime::ASM::fcmpo(cr0, context->f5, context->f0);
/*80199938 00196738*/ PPC::Runtime::ASM::bge(.L_80199974);
/*8019993C 0019673C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b8, context->r3));
/*80199940 00196740*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1154 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80199944 00196744*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80199948 00196748*/ PPC::Runtime::ASM::bge(.L_80199974);
/*8019994C 0019674C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f6, context->f0);
/*80199950 00196750*/ PPC::Runtime::ASM::bge(.L_80199964);
/*80199954 00196754*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f6);
/*80199958 00196758*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r4));
/*8019995C 0019675C*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*80199960 00196760*/ PPC::Runtime::ASM::fmadds(context->f6, context->f1, context->f0, context->f6);
RUNTIME_PPC_JUMP_LABEL(.L_80199964, 0x80199964) //this is a jump label
/*80199964 00196764*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r3));
/*80199968 00196768*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8019996C 0019676C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 3, 28, 28);
/*80199970 00196770*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80199974, 0x80199974) //this is a jump label
/*80199974 00196774*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b8, context->r3));
/*80199978 00196778*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1154 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019997C 0019677C*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f6);
/*80199980 00196780*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b8, context->r3));
/*80199984 00196784*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4bc, context->r3));
/*80199988 00196788*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*8019998C 0019678C*/ PPC::Runtime::ASM::bge(.L_801999C8);
/*80199990 00196790*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b8, context->r3));
/*80199994 00196794*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f3);
/*80199998 00196798*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*8019999C 0019679C*/ PPC::Runtime::ASM::ble(.L_801999C8);
/*801999A0 001967A0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801999A4 001967A4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r4));
/*801999A8 001967A8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*801999AC 001967AC*/ PPC::Runtime::ASM::bge(.L_801999BC);
/*801999B0 001967B0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b8, context->r3));
/*801999B4 001967B4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4bc, context->r3));
/*801999B8 001967B8*/ PPC::Runtime::ASM::b(.L_80199A38);
RUNTIME_PPC_JUMP_LABEL(.L_801999BC, 0x801999BC) //this is a jump label
/*801999BC 001967BC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f3, context->f0);
/*801999C0 001967C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b8, context->r3));
/*801999C4 001967C4*/ PPC::Runtime::ASM::b(.L_80199A38);
RUNTIME_PPC_JUMP_LABEL(.L_801999C8, 0x801999C8) //this is a jump label
/*801999C8 001967C8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1154 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801999CC 001967CC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*801999D0 001967D0*/ PPC::Runtime::ASM::ble(.L_80199A38);
/*801999D4 001967D4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b8, context->r3));
/*801999D8 001967D8*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f3);
/*801999DC 001967DC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*801999E0 001967E0*/ PPC::Runtime::ASM::bge(.L_80199A38);
/*801999E4 001967E4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801999E8 001967E8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x184, context->r4));
/*801999EC 001967EC*/ PPC::Runtime::ASM::fneg(context->f0, context->f2);
/*801999F0 001967F0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*801999F4 001967F4*/ PPC::Runtime::ASM::ble(.L_80199A04);
/*801999F8 001967F8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b8, context->r3));
/*801999FC 001967FC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4bc, context->r3));
/*80199A00 00196800*/ PPC::Runtime::ASM::b(.L_80199A0C);
RUNTIME_PPC_JUMP_LABEL(.L_80199A04, 0x80199A04) //this is a jump label
/*80199A04 00196804*/ PPC::Runtime::ASM::fadds(context->f0, context->f3, context->f2);
/*80199A08 00196808*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80199A0C, 0x80199A0C) //this is a jump label
/*80199A0C 0019680C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80199A10 00196810*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b8, context->r3));
/*80199A14 00196814*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x188, context->r4));
/*80199A18 00196818*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*80199A1C 0019681C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80199A20 00196820*/ PPC::Runtime::ASM::bge(.L_80199A28);
/*80199A24 00196824*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80199A28, 0x80199A28) //this is a jump label
/*80199A28 00196828*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r3));
/*80199A2C 0019682C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80199A30 00196830*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 3, 28, 28);
/*80199A34 00196834*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80199A38, 0x80199A38) //this is a jump label
/*80199A38 00196838*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4bc, context->r3));
/*80199A3C 0019683C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b8, context->r3));
/*80199A40 00196840*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E1154 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80199A44 00196844*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80199A48 00196848*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4bc, context->r3));
/*80199A4C 0019684C*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4bc, context->r3));
/*80199A50 00196850*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f3);
/*80199A54 00196854*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80199A58 00196858*/ PPC::Runtime::ASM::bne(.L_80199AAC);
/*80199A5C 0019685C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80199A60 00196860*/ PPC::Runtime::ASM::fmr(context->f29, context->f3);
/*80199A64 00196864*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1150 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80199A68 00196868*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r4));
/*80199A6C 0019686C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18c, context->r4));
/*80199A70 00196870*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*80199A74 00196874*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80199A78 00196878*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f0);
/*80199A7C 0019687C*/ PPC::Runtime::ASM::ble(.L_80199A84);
/*80199A80 00196880*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80199A84, 0x80199A84) //this is a jump label
/*80199A84 00196884*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80199A88 00196888*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4bc, context->r3));
/*80199A8C 0019688C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18c, context->r4));
/*80199A90 00196890*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1150 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80199A94 00196894*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r4));
/*80199A98 00196898*/ PPC::Runtime::ASM::fnmsubs(context->f30, context->f2, context->f1, context->f0);
/*80199A9C 0019689C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f3);
/*80199AA0 001968A0*/ PPC::Runtime::ASM::bge(.L_80199AC0);
/*80199AA4 001968A4*/ PPC::Runtime::ASM::fmr(context->f30, context->f3);
/*80199AA8 001968A8*/ PPC::Runtime::ASM::b(.L_80199AC0);
RUNTIME_PPC_JUMP_LABEL(.L_80199AAC, 0x80199AAC) //this is a jump label
/*80199AAC 001968AC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80199AB0 001968B0*/ PPC::Runtime::ASM::fneg(context->f1, context->f4);
/*80199AB4 001968B4*/ PPC::Runtime::ASM::lfs(context->f30, STRUCT_FLOAT_COUNT_1805E1150 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80199AB8 001968B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19c, context->r3));
/*80199ABC 001968BC*/ PPC::Runtime::ASM::fmuls(context->f29, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80199AC0, 0x80199AC0) //this is a jump label
/*80199AC0 001968C0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80199AC4 001968C4*/ PPC::Runtime::ASM::bne(.L_80199AD8);
/*80199AC8 001968C8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F10 @ Get_MemoryOffset_SDA21);
/*80199ACC 001968CC*/ PPC::Runtime::ASM::li(context->r4, 0x38f);
/*80199AD0 001968D0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6F18 @ Get_MemoryOffset_SDA21);
/*80199AD4 001968D4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80199AD8, 0x80199AD8) //this is a jump label
/*80199AD8 001968D8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80199ADC 001968DC*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80199AE0 001968E0*/ PPC::Runtime::ASM::bne(.L_80199AF4);
/*80199AE4 001968E4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F10 @ Get_MemoryOffset_SDA21);
/*80199AE8 001968E8*/ PPC::Runtime::ASM::li(context->r4, 0x38f);
/*80199AEC 001968EC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6F18 @ Get_MemoryOffset_SDA21);
/*80199AF0 001968F0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80199AF4, 0x80199AF4) //this is a jump label
/*80199AF4 001968F4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80199AF8 001968F8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80199AFC 001968FC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80199B00 00196900*/ PPC::Runtime::ASM::fsubs(context->f0, context->f30, context->f0);
/*80199B04 00196904*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x194, context->r3));
/*80199B08 00196908*/ PPC::Runtime::ASM::fmadds(context->f31, context->f1, context->f0, context->f31);
/*80199B0C 0019690C*/ PPC::Runtime::ASM::bne(.L_80199B20);
/*80199B10 00196910*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F10 @ Get_MemoryOffset_SDA21);
/*80199B14 00196914*/ PPC::Runtime::ASM::li(context->r4, 0x3c6);
/*80199B18 00196918*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6F18 @ Get_MemoryOffset_SDA21);
/*80199B1C 0019691C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80199B20, 0x80199B20) //this is a jump label
/*80199B20 00196920*/ PPC::Runtime::ASM::stfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80199B24 00196924*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80199B28 00196928*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80199B2C 0019692C*/ PPC::Runtime::ASM::bne(.L_80199B78);
/*80199B30 00196930*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80199B34 00196934*/ PPC::Runtime::ASM::beq(.L_80199B78);
/*80199B38 00196938*/ PPC::Runtime::ASM::bne(.L_80199B4C);
/*80199B3C 0019693C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F10 @ Get_MemoryOffset_SDA21);
/*80199B40 00196940*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80199B44 00196944*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6F18 @ Get_MemoryOffset_SDA21);
/*80199B48 00196948*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80199B4C, 0x80199B4C) //this is a jump label
/*80199B4C 0019694C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80199B50 00196950*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80199B54 00196954*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80199B58 00196958*/ PPC::Runtime::ASM::bne(.L_80199B68);
/*80199B5C 0019695C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80199B60 00196960*/ PPC::Runtime::ASM::beq(.L_80199B68);
/*80199B64 00196964*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80199B68, 0x80199B68) //this is a jump label
/*80199B68 00196968*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80199B6C 0019696C*/ PPC::Runtime::ASM::bne(.L_80199B78);
/*80199B70 00196970*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80199B74 00196974*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80199B78, 0x80199B78) //this is a jump label
/*80199B78 00196978*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80199B7C 0019697C*/ PPC::Runtime::ASM::bne(.L_80199B90);
/*80199B80 00196980*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F10 @ Get_MemoryOffset_SDA21);
/*80199B84 00196984*/ PPC::Runtime::ASM::li(context->r4, 0x333);
/*80199B88 00196988*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6F18 @ Get_MemoryOffset_SDA21);
/*80199B8C 0019698C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80199B90, 0x80199B90) //this is a jump label
/*80199B90 00196990*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80199B94 00196994*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80199B98 00196998*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80199B9C 0019699C*/ PPC::Runtime::ASM::bne(.L_80199BE8);
/*80199BA0 001969A0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80199BA4 001969A4*/ PPC::Runtime::ASM::beq(.L_80199BE8);
/*80199BA8 001969A8*/ PPC::Runtime::ASM::bne(.L_80199BBC);
/*80199BAC 001969AC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F10 @ Get_MemoryOffset_SDA21);
/*80199BB0 001969B0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80199BB4 001969B4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6F18 @ Get_MemoryOffset_SDA21);
/*80199BB8 001969B8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80199BBC, 0x80199BBC) //this is a jump label
/*80199BBC 001969BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80199BC0 001969C0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80199BC4 001969C4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80199BC8 001969C8*/ PPC::Runtime::ASM::bne(.L_80199BD8);
/*80199BCC 001969CC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80199BD0 001969D0*/ PPC::Runtime::ASM::beq(.L_80199BD8);
/*80199BD4 001969D4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80199BD8, 0x80199BD8) //this is a jump label
/*80199BD8 001969D8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80199BDC 001969DC*/ PPC::Runtime::ASM::bne(.L_80199BE8);
/*80199BE0 001969E0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80199BE4 001969E4*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80199BE8, 0x80199BE8) //this is a jump label
/*80199BE8 001969E8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80199BEC 001969EC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80199BF0 001969F0*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80199BF4 001969F4*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80199BF8 001969F8*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*80199BFC 001969FC*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80199C00 00196A00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80199C04 00196A04*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80199C08 00196A08*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80199C0C 00196A0C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80199C10 00196A10*/ PPC::Runtime::ASM::blr();
}