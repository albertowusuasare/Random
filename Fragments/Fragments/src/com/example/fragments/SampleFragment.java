package com.example.fragments;

import android.app.Fragment;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

public class SampleFragment extends Fragment {

	//Initial creation of the fragment
	@Override
	public void onCreate(Bundle savedInstanceState){
		
	}//onCreate(Bundle)
	
	 
	public View onCreateView(LayoutInflater inflater, ViewGroup container,
			Bundle savedInstanceState){
		return  inflater.inflate(R.layout.fragment_01,container,false);
	}
	
	
}
